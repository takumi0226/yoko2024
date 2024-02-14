from launch import LaunchDescription
from launch.actions import TimerAction, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import numpy as np
import sys
import argparse
import os
import math

def generate_launch_description():
    ap = argparse.ArgumentParser(prog='ros2 launch choirbot_examples formationcontrol.launch.py')
    ap.add_argument("-l", "--length", help="length of hexagon sides", default=3, type=float)
    ap.add_argument("-s", "--seed", help="seed for initial positions", default=5, type=float)

    # parse arguments (exception thrown on error)
    args, _ = ap.parse_known_args(sys.argv)
    L = float(args.length)

    # set rng seed
    np.random.seed(args.seed)

    # communication matrix
    #N = 6
    #Adj = np.array([ # alternated zeros and ones
    #    [0, 1, 0, 1, 0, 1],
    #    [1, 0, 1, 0, 1, 0],
    #    [0, 1, 0, 1, 0, 1],
    #    [1, 0, 1, 0, 1, 0],
    #    [0, 1, 0, 1, 0, 1],
    #    [1, 0, 1, 0, 1, 0]
    #])

    #N = 5
    N = 5
    #N = 2
    #Adj = np.array([
    #    [1 , 0],
    #    [0 , 1]
    #])

    Adj = np.array([ # alternated zeros and ones
        #[0, 1, 1],
        #[1, 0, 1],
        #[1, 1, 0]
   #     [0, 1, 1, 1],
   #     [1, 0, 1, 1],
   #     [1, 1, 0, 1],
   #     [1, 1, 1, 0]
   # ])
        [0, 1, 1, 1, 1],
        [1, 0, 1, 1, 1],
        [1, 1, 0, 1, 1],
        [1, 1, 1, 0, 1],
        [1, 1, 1, 1, 0]
        #[0, 1, 1, 1, 1, 1],
        #[1, 0, 1, 1, 1, 1],
        #[1, 1, 0, 1, 1, 1],
        #[1, 1, 1, 0, 1, 1],
        #[1, 1, 1, 1, 0, 1],
        #[1, 1, 1, 1, 1, 0]

    ])
   # ])send_inputstances
    # adjacent robots have distance L
    # opposite robots have distance 2L
    #W = np.array([
    #    [0,   L,   0,   2*L, 0,   L],
    #    [L,   0,   L,   0,   2*L, 0],
    #    [0,   L,   0,   L,   0,   2*L],
    #    [2*L, 0,   L,   0,   L,   0],
    #   [0,   2*L, 0,   L,   0,   L],
    #    [L,   0,   2*L, 0,   L,   0]
    #])

    W = np.array([
        #[1 , 0],
        #[0 , 1]
        #[0,  1,  1 ],
        #[1,  0,  1 ],
        #[1,  1,  0 ]
        #[0, 1, 1, 1],
        #[1, 0, 1, 1],
        #[1, 1, 0, 1],
        #[1, 1, 1, 0]
        [0, 1, 1, 1, 1],
        [1, 0, 1, 1, 1],
        [1, 1, 0, 1, 1],
        [1, 1, 1, 0, 1],
        [1, 1, 1, 1, 0]
        #[0, 1, 1, 1, 1, 1],
        #[1, 0, 1, 1, 1, 1],
        #[1, 1, 0, 1, 1, 1],
        #[1, 1, 1, 0, 1, 1],
        #[1, 1, 1, 1, 0, 1],
        #[1, 1, 1, 1, 1, 0]

        #[0,  L/4,  L/4 ],
        #[L/4,  0,  L/4 ],
        #[L/4,  L/4,  0 ]
    ])

    # generate coordinates of hexagon with center in the origin
    a = 1/2
    b = np.sqrt(3)*a
    c = np.sqrt(3)*1

    si72 = math.sin(math.radians(72))
    co72 = math.cos(math.radians(72))
    si36 = math.sin(math.radians(36))
    co36 = math.cos(math.radians(36))

    P = np.array([
        #[0.0, 0.0, 0.0],
        #[-b,  a, 0.0],      
        #[-b, -a, 0.0],
       # [  0.0,   0.0,  0.0],
       # [ 10.0,   0.0,  0.0],
       # [ 20.0,   0.0,  0.0],
       # [  5.0, 5.0*c,  0.0],
       # [ 15.0, 5.0*c,  0.0]
       
       #[  0.0,   0.0, 0.0],
       #[ 10.0,   0.0, 0.0],
       #[  5.0, 5.0*c, 0.0]
    ###--- 初期位置の変更 ---###
        [  5.0 ,   0.0 , 0],
        [  5.0*co72  ,   5.0*si72 , 0],
        [  5.0*co72  ,   5.0*-si72 , 0],
        [  5.0*-co36 ,   5.0*si36 , 0],
        [  5.0*-co36 ,   5.0*-si36 , 0],

        #[  2.0 ,   0.0 , 0],
        #[  2.0*co72  ,   2.0*si72 , 0],
        #[  2.0*co72  ,   2.0*-si72 , 0],
        #[  2.0*-co36 ,    2.0*si36 , 0],
        #[  2.0*-co36 ,   2.0*-si36 , 0],
        
       # [  0.0 ,   0.0 , 0],
       # [  2.0 ,   2.0 , 0],
       # [  2.0 ,  -2.0 , 0],
       # [ -2.0 ,   2.0 , 0],
       # [ -2.0 ,  -2.0 , 0],
      
        #[  10.0 ,    0.0 , 0]
        #[  0.0 ,   0.0 , 0],
        #[  5.0 ,   5.0 , 0],
        #[  12.5 ,  2.5 , 0],
        #[  14.0 ,  10.0 , 0],
        #[  17.5 ,  17.5 , 0]

    ])
    #P = np.array([
    #    #[0.0, 0.0, 0.0],
    #    #[-b,  a, 0.0],      
    #    #[-b, -a, 0.0],
    #    [0.0, 0.0, 3.1],
    #    [-b-0.1,  a-0.1, 2.8],      
    #    [-b, -a, 3.0],
    #    [-b/2, 0.0, 3.0+b]
    #])
    
    # initial positions have a perturbation of at most L/3
    #P += np.random.uniform(-L/3, L/3, (3,3))

    ## generate coordinates of hexagon with center in the origin
    #a = L/2
    #b = np.sqrt(3)*a
#
    #P = np.array([
    #    [-b, a , 0],
    #    [0, 2.0*a, 0],      
    #    [b, a, 0],
    #    [b, -a, 0],
    #    [0, -2.0*a, 0],
    #    [-b, -a, 0]
    #])
    #
    ## initial positions have a perturbation of at most L/3
    #P += np.random.uniform(-L/3, L/3, (6,3))

    # initialize launch description
    robot_launch = []       # launched after 10 sec (to let Gazebo open)
    launch_description = [] # launched immediately (will contain robot_launch)

    # add executables for each robot
    for i in range(N):

        in_neighbors  = np.nonzero(Adj[:, i])[0].tolist()
        out_neighbors = np.nonzero(Adj[i, :])[0].tolist()
        weights = W[i,:].tolist()
        position = P[i, :].tolist()

        # guidance
        robot_launch.append(Node(
            package='choirbot_examples', node_executable='choirbot_formationcontrol_guidance', output='screen',
            node_namespace='agent_{}'.format(i),
            parameters=[{'agent_id': i, 'N': N, 'in_neigh': in_neighbors, 'out_neigh': out_neighbors, 'weights': weights}]))
        
        # controller
        robot_launch.append(Node(
            package='choirbot_examples', node_executable='choirbot_formationcontrol_controller', output='screen',
            node_namespace='agent_{}'.format(i),
            parameters=[{'agent_id': i}]))
        
        # turtlebot spawner
        launch_description.append(Node(
            # package='choirbot_examples', node_executable='choirbot_turtlebot_spawner', output='screen',
            package='choirbot_examples', node_executable='choirbot_turtlebot_spawner', output='screen',
            parameters=[{'namespace': 'agent_{}'.format(i), 'position': position}]))
    
    # include launcher for gazebo
    gazebo_launcher = os.path.join(get_package_share_directory('choirbot_examples'), 'gazebo.launch.py')
    launch_description.append(IncludeLaunchDescription(PythonLaunchDescriptionSource(gazebo_launcher)))
    
    # include delayed robot executables
    timer_action = TimerAction(period=10.0, actions=[LaunchDescription(robot_launch)])
    launch_description.append(timer_action)



    
    #add 12/23
    #woter_launch = []
    #woter_timer_action = TimerAction(period=10.0, actions=[LaunchDescription(woter_launch)])
    #launch_description.append(woter_timer_action)
#
    #woter_launch.append(Node(
    #    package='choirbot_examples', node_executable='publish_world_models.py', output='screen',
    #    #node_namespace='agent_{}'.format(i),
    #    #parameters=[{'agent_id': i, 'N': N, 'in_neigh': in_neighbors, 'out_neigh': out_neighbors, 'weights': weights}]))
    #))




    return LaunchDescription(launch_description)
