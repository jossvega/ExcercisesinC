#include <stdio.h>


 /* count lines in input */ 
 
 ejemplolibro (){
	int c, nl;
 	nl = 0;
 	while ((c = getchar()) != EOF)
 	if (c == '\n')
 	++nl;
 	printf("%d\n", nl);
}

ejemplolearn() {

    int char_count, num_lines, num_tabs, num_spaces;

    num_lines = 0;
    num_tabs = 0;
    num_spaces = 0;

    while ((char_count = getchar()) != EOF) {
        if (char_count == '\n')
            ++num_lines;
        if (char_count == '\t')
            ++num_tabs;
        if (char_count == ' ')
            ++num_spaces;
    }

    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", num_spaces, num_tabs, num_lines);

}
 
 
 
 main() {
 //ejemplolibro();
 ejemplolearn();	
}


