for _ in range(int(input())):
    rating = int(input())
    # For Division 1: 1900≤rating
    if 1900<=rating:
        print("Division 1")
    # For Division 2: 1600≤rating≤1899
    elif 1600<= rating <=1899:
        print("Division 2")
    # For Division 3: 1400≤rating≤1599
    elif 1400<=rating<=1599:
        print("Division 3")
    # For Division 4: rating≤1399
    elif rating <= 1399:
        print("Division 4")
        