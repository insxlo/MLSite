#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int i = 0;
    FILE *fp;
    fp = fopen("site.txt", "w");
    for(i = 1; i <= 37; i++){
        fprintf(fp, "<div class=\"item\">\n");
        fprintf(fp, "<img src=\"./img/gallery-c/%d.jpg\" class=\"img-responsive\">\n", i);
        fprintf(fp, "<div class=\"carousel-caption\">\n");
        fprintf(fp, "</div>\n</div>\n");
    }
    
    return EXIT_SUCCESS;
}