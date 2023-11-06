class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int row=matrix.size();
    int cols=matrix[0].size();
    int s = 0;
    int e = row*cols-1;
    int mid = s + (e-s)/2;

  while(s <= e) {
    int rowIndex = mid/cols;
    int colIndex = mid%cols;
    
    if(matrix[rowIndex][colIndex] == target) {
      //cout << "Found at " << rowIndex <<" " << colIndex << endl;
      return true;
      break;
    }

    if(matrix[rowIndex][colIndex] < target) {
      s = mid +1;
    }
    else {
      e = mid - 1;
    }
    mid = s + (e-s)/2;
  }
  return false;
}
        
    
};
