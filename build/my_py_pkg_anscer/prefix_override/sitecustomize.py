import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/asd/temp_git_repo/RViz_Trajectory_Visualizer/install/my_py_pkg_anscer'
