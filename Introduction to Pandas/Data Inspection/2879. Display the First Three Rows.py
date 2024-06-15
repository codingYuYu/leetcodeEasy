import pandas as pd

def selectFirstRows(employees: pd.DataFrame) -> pd.DataFrame:
    df = pd.DataFrame(employees)
    return df.head(3) 
    # OR
    return employees.head(3)
    # OR
    return employees.iloc[0:3]