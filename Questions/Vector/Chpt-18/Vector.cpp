// Today Checklist
// 2D Vcetor
// Pascal Traingle

// ? 2D Vector
/*
vector<vector<datatype>> vector_name;

vector<int> v1 = {1, 2, 3};
vector<int> v2 = {4, 5};
vector<int> v3 = {6, 7};

vector<vector<int>> v={v1, v2, v3}

<vector<int>> V(n, vector<int>(m));
! here n--> is row size and m ---> is column size
for 3*4 vector
vector<vector<int>> V(3,vector<int>(4));
*/

// ? Pascal Traingle

/*
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1

! a[i][j] = icj
a[i][j] = a[i-1][j] + a[i-1][j-1]
nth row --> j = 0; Nc0 = 1
j = n; Ncn = 1
*/

