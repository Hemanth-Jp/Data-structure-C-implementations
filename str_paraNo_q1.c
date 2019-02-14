void main(){
char story[30][100] = {{"     In the past few years, artificial intelligence (AI) has been a subject of intense media"},       /* Data used for the word processing */
                      {"hype.Machine learning, deep learning, and AI come up in countless articles, often outside"},               /* For variables: Use lower-case words separated by underscores */
                      {"of technology-minded publications. We’re promised a future of intelligent chatbots, self-"},
                      {"driving cars, and virtual assistants—a future sometimes painted in a grim light and other"},
                      {"times as utopian, where human jobs will be scarce and most economic activity will be"},
                      {"handled by robots or AI agents. "},
		      {"     Machine learning arises from this question: could a computer go beyond “what we know"},
		      {"how to order it to perform” and learn on its own how to perform a specified task? Could a"},
 		      {"computer surprise us? Rather than programmers crafting data-processing rules by hand,"},
		      {"could a computer automatically learn these rules by looking at data? "},
 		      {"     A machine-learning system is trained rather than explicitly programmed. It’s presented"},
 		      {"with many examples relevant to a task, and it finds statistical structure in these examples"},
		      {"that eventually allows the system to come up with rules for automating the task. "},
 		      {"     Although machine learning only started to flourish in the 1990s, it has quickly"},
		      {"become the most popular and most successful subfield of AI, a trend driven by the"},
 		      {"availability of faster hardware and larger datasets. Machine learning is tightly related to"},
 		      {"mathematical statistics, but it differs from statistics in several important ways. Unlike"},
 		      {"statistics, machine learning tends to deal with large, complex datasets (such as a dataset of"},
 		      {"millions of images, each consisting of tens of thousands of pixels) for which classical"},
		      {"statistical analysis such as Bayesian analysis would be impractical. As a result, machine"},
		      {"learning, and especially deep learning, exhibits comparatively little mathematical theory—"},
		      {"maybe too little and is engineering oriented. It’s a hands-on discipline in which ideas are"},
		      {"proven empirically more often than theoretically. "},
		      {"     Amachine-learning model transforms its input data into meaningful outputs, a process"},
		      {"that is “learned” from exposure to known examples of inputs and outputs. Therefore, the"},
		      {"central problem in machine learning and deep learning is to meaningfully transform data:"},
		      {"in other words, to learn useful representations of the input data at hand representations"},
		      {"that get us closer to the expected output. "}

};

int i,j,NPAR=0;
int *PAR[10];
   for(i=0; i<30; i++) {


        printf("%c", story[i][0]);
        if (story[i][0] == ' ')
         {
         NPAR++;
         PAR[i]= &story[i][0];

         }


   }
   printf("\nNumber of paragraph=%d\n", NPAR );

for(i=0; i<5; i++){
      printf("location of k_th paragraphs   %d \n", &PAR[i]);

   }
}
