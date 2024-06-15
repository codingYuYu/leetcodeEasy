'''
method 1
'''

import pandas as pd

def getDataframeSize(players: pd.DataFrame) -> List[int]:
    df = pd.DataFrame(players)
    rows, columns = df.shape
    return [rows, columns]

'''
method 2 
'''
import pandas as pd

def getDataframeSize(players: pd.DataFrame) -> List[int]:
    rows = len(players.axes[0])
    cols = len(players.axes[1])
    return [rows,cols]