import pandas as pd

def selectData(students: pd.DataFrame) -> pd.DataFrame:
    student_101 = students.loc[students['student_id'] == 101, ['name', 'age']]
    return student_101
    # OR
    return df[df['student_id'] == 101][['name', 'age']]