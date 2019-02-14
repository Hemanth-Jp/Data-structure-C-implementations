#include <stdio.h>
#include <string.h>
void main(){
    int i=0,j=0;
char story[30][100] = {"     In the past few years, artificial intelligence (AI) has been a subject of intense media",       /* Data used for the word processing */
                      "hype.Machine learning, deep learning, and AI come up in countless articles, often outside",               /* For variables: Use lower-case words separated by underscores */
                      "of technology-minded publications. We’re promised a future of intelligent chatbots, self-",
                      "driving cars, and virtual assistants—a future sometimes painted in a grim light and other",
                      "times as utopian, where human jobs will be scarce and most economic activity will be",
                      "handled by robots or AI agents. ",
		      "     Machine learning arises from this question: could a computer go beyond “what we know",
		      "how to order it to perform” and learn on its own how to perform a specified task? Could a",
 		      "computer surprise us? Rather than programmers crafting data-processing rules by hand,",
		      "could a computer automatically learn these rules by looking at data? ",
 		      "     A machine-learning system is trained rather than explicitly programmed. It’s presented",
 		      "with many examples relevant to a task, and it finds statistical structure in these examples",
		      "that eventually allows the system to come up with rules for automating the task. ",
 		      "     Although machine learning only started to flourish in the 1990s, it has quickly",
		      "become the most popular and most successful subfield of AI, a trend driven by the",
 		      "availability of faster hardware and larger datasets. Machine learning is tightly related to",
 		      "mathematical statistics, but it differs from statistics in several important ways. Unlike",
 		      "statistics, machine learning tends to deal with large, complex datasets (such as a dataset of",
 		      "millions of images, each consisting of tens of thousands of pixels) for which classical",
		      "statistical analysis such as Bayesian analysis would be impractical. As a result, machine",
		      "learning, and especially deep learning, exhibits comparatively little mathematical theory—",
		      "maybe too little and is engineering oriented. It’s a hands-on discipline in which ideas are",
		      "proven empirically more often than theoretically. ",
		      "     A machine-learning model transforms its input data into meaningful outputs, a process",
		      "that is “learned” from exposure xx to xx. known examples of inputs and outputs. Therefore, the",
		      "central problem in machine learning and deep learning is to meaningfully transform data:",
		      "in other words, to learn useful representations of the input data at hand representations",
		      "that get us closer to the expected output. "
		      };


     for(i=0; i<30; i++) {

             char *word=strtok(story[i]," .?-:");




               while (word!=NULL) {
                 //printf("%s\n",word);
                        if (!strcmp(word,"data"))
                            j++;
                 word=strtok(NULL," .?-:");
                  }
         printf("number of words found in line %d = %d\n",i+1,j);
         j=0;


   }
   //printf("%d\n",j);
}
