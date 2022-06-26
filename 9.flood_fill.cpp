/* 
An image is represented by an m x n integer grid image where image[i][j] represents the pixel value of the image.

You are also given three integers sr, sc, and color. You should perform a flood fill on the image starting from the pixel image[sr][sc].

To perform a flood fill, consider the starting pixel, plus any pixels connected 4-directionally 
to the starting pixel of the same color as the starting pixel, plus any pixels connected 4-directionally to 
those pixels (also with the same color), and so on. Replace the color of all of the aforementioned pixels with color.

Return the modified image after performing the flood fill.
*/

void fill(vector<vector<int>>& img, vector<vector<bool>>& visited, int w, int h, int i, int j, int newColor, int starting) {
    if (i >= 0 && i < h && j >=0 && j < w) {
        if (img[i][j] == starting && !visited[i][j]) {
            img[i][j] = newColor;
            visited[i][j] = true;

            fill(img, visited, w, h, i, j - 1, newColor, starting); // left
            fill(img, visited, w, h, i - 1, j, newColor, starting); // top
            fill(img, visited, w, h, i, j + 1, newColor, starting); // right
            fill(img, visited, w, h, i + 1, j, newColor, starting); // bottom    
        }
    }
}

vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
    int h = image.size();
    int w = image[0].size();
    vector<vector<bool>> visited(h, vector<bool>(w, false));
    
    fill(image, visited, w, h, sr, sc, newColor, image[sr][sc]);
    
    return image;
}