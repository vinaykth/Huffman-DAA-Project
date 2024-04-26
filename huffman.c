// Define a structure for a node in the Huffman tree
struct MinHeapNode {
    char data;
    unsigned freq;
    struct MinHeapNode *left, *right;
};

// Define a structure for a min heap
struct MinHeap {
    unsigned size;
    unsigned capacity;
    struct MinHeapNode **array;
};

// Function to create a new min heap node
struct MinHeapNode* newNode(char data, unsigned freq);

// Function to create a new min heap
struct MinHeap* createMinHeap(unsigned capacity);

// Function to swap two min heap nodes
void swapMinHeapNode(struct MinHeapNode** a, struct MinHeapNode** b);

// Function to heapify a subtree with the root at given index
void minHeapify(struct MinHeap* minHeap, int idx);

// Function to check if size of heap is 1
int isSizeOne(struct MinHeap* minHeap);

// Function to extract minimum node from heap
struct MinHeapNode* extractMin(struct MinHeap* minHeap);

// Function to insert a new node to min heap
void insertMinHeap(struct MinHeap* minHeap, struct MinHeapNode* minHeapNode);

// Function to build Huffman tree
struct MinHeapNode* buildHuffmanTree(char data[], int freq[], int size);

// Function to print Huffman codes from the root of Huffman Tree
void printCodes(struct MinHeapNode* root, int arr[], int top);

// Function to perform Huffman coding
void HuffmanCodes(char data[], int freq[], int size);

// Main function
int main() {
    char data[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    int freq[] = { 5, 9, 12, 13, 16, 45 };
    int size = sizeof(data) / sizeof(data[0]);
    printf("Huffman Codes:\n");
    HuffmanCodes(data, freq, size);
    return 0;
}