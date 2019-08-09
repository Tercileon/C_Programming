<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/00-Table-of-Contents.md" rel="Return to TOC"> Return to TOC </a>

# Arrays of Structs

Similar in concept to multi-dimensional arrays.

## Declaration of a Struct Array
```c
struct HouseForSale {
    char mailing_address[1024];
    float cost_per_sq_ft;
    float square_footage;
    float total_cost;
};
int main(void)
{
    struct HouseForSale FF4HQ = { “Baxter Building, 42nd Street, \
        Madison Avenue, Manhattan”, 107.15, 28000, 0};
    struct HouseForSale durdenManor = { “420 Paper St. Wilmington, \
        DE 19886”, 0.01, 4500, 0};
    struct HouseForSale mustSellHouses[4]; // Array of 4 structs
[…]
}
```

## Inititalization of a Struct Array
```c
struct HouseForSale {
    char mailing_address[1024];
    float cost_per_sq_ft;
    float square_footage;
    float total_cost;
};
int main(void)
{
    struct HouseForSale FF4HQ = { “Baxter Building, 42nd Street, \
        Madison Avenue, Manhattan”, 107.15, 28000, 0};
    struct HouseForSale durdenManor = { “420 Paper St. Wilmington, \
        DE 19886”, 0.01, 4500, 0};
    struct HouseForSale mustSellHouses[4] = { FF4HQ, durdenManor }; 
[…]
}
```
NOTE: ANY ARRAY OF STRUCTS MAY BE A COPY OF THE ORIGINALS

## Initialization of a Struct POINTER array

### [Utilize struct pointers to ensure modification]
```c
struct HouseForSale {
    char mailing_address[1024];
    float cost_per_sq_ft;
    float square_footage;
    float total_cost;
};
int main(void)
{
    struct HouseForSale FF4HQ = { “Baxter Building, 42nd Street, \
        Madison Avenue, Manhattan”, 107.15, 28000, 0};
    struct HouseForSale durdenManor = { “420 Paper St. Wilmington, \
        DE 19886”, 0.01, 4500, 0};
    struct HouseForSale * mustSellHouses[4] = { \
        &FF4HQ, &durdenManor }; 
}
```

---
<a href="https://github.com/CyberTrainingUSAF/05-C-Programming/blob/master/14_Structs/04_struct_visualization.md" rel="Continue to Next Topic"> Continue to Next Topic </a>
