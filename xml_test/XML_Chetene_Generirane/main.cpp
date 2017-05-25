@@ -31,7 +31,7 @@ int main(){
    pugi::xml_node cd = nodeObjekt.child("CD");
    
    vector<Cd>v_cds;
    //child example//
    //child example//
    
    for (pugi::xml_node cd = nodeObjekt.child("CD");cd;cd = cd.next_sibling("CD")) {
        
        @@ -54,7 +54,7 @@ int main(){
            
        }
        
        //atribute example//
        //atribute example//
        
        for (pugi::xml_node cd = nodeObjekt.first_child(); cd;
             cd = cd.next_sibling()) {
            @@ -63,23 +63,23 @@ int main(){
                cout<<cd.attribute("color").value();
                
                for (pugi::xml_attribute attr = cd.first_attribute(); attr;attr = attr.next_attribute()) {
                    cout << " " << attr.name() << "=" << attr.value();
                    cout << " " << attr.name() << "=" << attr.value();
                }
            }
            
            //first last child example//
            //first last child example//
            
            cout << "Last child: "<< nodeObjekt.last_child().child("COMPANY").text().as_string()<<endl;
            cout <<nodeObjekt.first_child().child("TITLE").text().as_string()<<endl;
            cout << nodeObjekt.first_child().child("ARTIST").attribute("name").value()<<endl;
            cout << cd.child("ARTIST").last_attribute().value()<<"*******"<<endl ;
            /////////////////////////////////////////////////////////////////////////////////////////////////
            /////////////////////////////////////////////////////////////////////////////////////////////////
            
            for (pugi::xml_node cd = nodeObjekt.child("CD"); cd;
                 cd = cd.next_sibling("CD")) {
                cout << "CD " << cd.attribute("id").value();
                //  cout << ": AllowRemote "
                // << tool.attribute("AllowRemote").as_bool();
                //  cout << ": AllowRemote "
                // << tool.attribute("AllowRemote").as_bool();
                cout << ", Telefon " << cd.child("ARTIST").attribute("tel").as_int();
                cout << ", ??? '" << cd.child_value("ARTIST")
                << "'\n";
                @@ -87,14 +87,14 @@ int main(){
                    // add to vector/map
                }
                
                ///////////////////////////////////////////////////////////////////////////////////////////////////
                ///////////////////////////////////////////////////////////////////////////////////////////////////
                // finding a node/attribute with the correct name
                // tag::contents[]
                //find_child_by_attribute
                
                for (pugi::xml_node cd = nodeObjekt.child("CD");cd;cd = cd.next_sibling()) {
                    
                    
                    
                    cout <<"------"<< cd.find_child_by_attribute("ARTIST", "name", "pepi").attribute("tel").value() << "\n";
                    
                }
                @@ -103,18 +103,18 @@ int main(){
                    cd = cd.next_sibling("CD")) {
                        cout << "ARTIST " << cd.child("ARTIST").attribute("tel").value() << "\n";
                    }
                    
                    
                    /////////////////////////////////////////////////////////////////////////////////////////////////////////
                    //modify
                    
                    
                    pugi::xml_document doc1;
                    
                    
                    if (!doc1.load_string("<node id='123'>text</node><!-- comment -->",
                                          pugi::parse_default | pugi::parse_comments))
                        return -1;
                    
                    
                    /////////////////////////////////////////////////////////////////////////////////////////////////////////
                    //modify
                    
                    
                    pugi::xml_document doc1;
                    
                    
                    if (!doc1.load_string("<node id='123'>text</node><!-- comment -->",
                                          pugi::parse_default | pugi::parse_comments))
                        return -1;
                    
                    // tag::node[]
                    pugi::xml_node node = doc1.child("node");
                    @@ -129,7 +129,7 @@ if (!doc1.load_string("<node id='123'>text</node><!-- comment -->",
                                                              << endl;
                                                              
                                                              // we can't change value of the element or name of the comment
                                                              cout << node.set_value("1") << ", " << doc1.last_child().set_name("2")
                                                              cout << node.set_value("1") << ", " << doc1.last_child().set_name("2")
                                                              << endl;
                                                              // end::node[]
                                                              
                                                              @@ -140,7 +140,7 @@ if (!doc1.load_string("<node id='123'>text</node><!-- comment -->",
                                                                                                        cout << attr.set_name("key") << ", " << attr.set_value("345");
                                                                                                        cout << ", new attribute: " << attr.name() << "=" << attr.value()
                                                                                                        << endl;
                                                                                                        
                                                                                                        
                                                                                                        // we can use numbers or booleans
                                                                                                        attr.set_value(1.234);
                                                                                                        cout << "new attribute value: " << attr.value() << std::endl;
                                                                                                        @@ -150,8 +150,8 @@ if (!doc1.load_string("<node id='123'>text</node><!-- comment -->",
                                                                                                                                                  cout << "final attribute value: " << attr.value() << std::endl;
                                                                                                                                                  // end::attr[]
                                                                                                                                                  // add new attributes/nodes
                                                                                                                                                  // pugi::xml_document doc1;
                                                                                                                                                  //////////////////////////////////////////////////////////////////////////////////
                                                                                                                                                  // pugi::xml_document doc1;
                                                                                                                                                  //////////////////////////////////////////////////////////////////////////////////
                                                                                                                                                  // tag::code[]
                                                                                                                                                  // add node with some name
                                                                                                                                                  pugi::xml_node appendNode = doc1.append_child("node");
                                                                                                                                                  @@ -177,9 +177,9 @@ if (!doc1.load_string("<node id='123'>text</node><!-- comment -->",
                                                                                                                                                                                            
                                                                                                                                                                                            
                                                                                                                                                                                            
                                                                                                                                                                                            //////////////////////////////////////////////////////////////////////////
                                                                                                                                                                                            //    // save to file
                                                                                                                                                                                            //    // get a test document
                                                                                                                                                                                            //////////////////////////////////////////////////////////////////////////
                                                                                                                                                                                            //    // save to file
                                                                                                                                                                                            //    // get a test document
                                                                                                                                                                                            pugi::xml_document doc2;
                                                                                                                                                                                            doc2.load_string("<foo bar='baz'>hey</foo>");
                                                                                                                                                                                            
                                                                                                                                                                                            @@ -190,8 +190,8 @@ if (!doc1.load_string("<node id='123'>text</node><!-- comment -->",
                                                                                                                                                                                                                                      // end::code[]
                                                                                                                                                                                                                                      
                                                                                                                                                                                                                                      
                                                                                                                                                                                                                                      /////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                                                                                                                                                                                      // crate new xml doc with c++ code
                                                                                                                                                                                                                                      /////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                                                                                                                                                                                      // crate new xml doc with c++ code
                                                                                                                                                                                                                                      
                                                                                                                                                                                                                                      pugi::xml_document doc3;
                                                                                                                                                                                                                                      pugi::xml_node appendNode1 = doc3.append_child("Students");
                                                                                                                                                                                                                                      @@ -205,11 +205,11 @@ if (!doc1.load_string("<node id='123'>text</node><!-- comment -->",
                                                                                                                                                                                                                                                                                  pugi::xml_node studentBirdDate = singleStudent.append_child("Bird_Date");
                                                                                                                                                                                                                                                                                  studentBirdDate.append_child(pugi::node_pcdata).set_value("04.07.1988");
                                                                                                                                                                                                                                                                                  singleStudent.append_attribute("id=1");
                                                                                                                                                                                                                                                                                  pugi::xml_node studentExams = singleStudent.append_child("exams");
                                                                                                                                                                                                                                                                                  pugi::xml_node studentExam = studentExams.append_child("exam");
                                                                                                                                                                                                                                                                                  pugi::xml_node studentExam1 = studentExams.append_child("exam");
                                                                                                                                                                                                                                                                                  pugi::xml_node studentExam2 = studentExams.append_child("exam");
                                                                                                                                                                                                                                                                                  pugi::xml_node studentExam3 = studentExams.append_child("exam");
                                                                                                                                                                                                                                                                                  pugi::xml_node studentExams = singleStudent.append_child("exams");
                                                                                                                                                                                                                                                                                  pugi::xml_node studentExam = studentExams.append_child("exam");
                                                                                                                                                                                                                                                                                  pugi::xml_node studentExam1 = studentExams.append_child("exam");
                                                                                                                                                                                                                                                                                  pugi::xml_node studentExam2 = studentExams.append_child("exam");
                                                                                                                                                                                                                                                                                  pugi::xml_node studentExam3 = studentExams.append_child("exam");
                                                                                                                                                                                                                                                                                  studentExam.append_attribute("teacher")="Iliev";
                                                                                                                                                                                                                                                                                  studentExam1.append_attribute("teacher")="Ivanov";
                                                                                                                                                                                                                                                                                  studentExam2.append_attribute("teacher")="Georgiev";
                                                                                                                                                                                                                                                                                  @@ -231,28 +231,64 @@ if (!doc1.load_string("<node id='123'>text</node><!-- comment -->",
                                                                                                                                                                                                                                                                                                                              doc3.save_file("Student.xml");
                                                                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                                                                              ////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                                                                                                                                                                                                                                                                              // chetene ot xml-a koito syszdadohme
                                                                                                                                                                                                                                                                                                                              ////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                                                                                                                                                                                                                                                                              // chetene ot xml-a koito syszdadohme
                                                                                                                                                                                                                                                                                                                              //display info from tag with name: Name
                                                                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                                                                              for (pugi::xml_node student = singleStudent.child("Name") ; singleStudent; singleStudent= singleStudent.next_sibling("name")) {
                                                                                                                                                                                                                                                                                                                                  cout <<"------------" <<"Name " << singleStudent.child("Name").text().as_string();
                                                                                                                                                                                                                                                                                                                                  for (pugi::xml_node student = singleStudent ; student; student= student.next_sibling("Student")) {
                                                                                                                                                                                                                                                                                                                                      cout <<"------------" <<"Name " << student.child("Name").text().as_string()<<"Tel" <<student.child("Tel").text().as_string()<<endl;
                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                  ////////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                                                                                                                                                                                                                                                                                  //   ciklene po vytreshni childove
                                                                                                                                                                                                                                                                                                                                  //    dispplay all attributes
                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                  for (pugi::xml_node student = singleStudent; student; student=student.next_sibling("Student")) {
                                                                                                                                                                                                                                                                                                                                      for (pugi::xml_node  exam = student.child("exams").child("exam") ; exam; exam = exam.next_sibling("exam")) {
                                                                                                                                                                                                                                                                                                                                          for (pugi::xml_attribute attr = exam.first_attribute(); attr; attr = attr.next_attribute()) {
                                                                                                                                                                                                                                                                                                                                              cout<<attr.name()<<":"<<attr.value()<<endl;
                                                                                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                                                                                          }
                                                                                                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                  ///////////////////////////////////////////////////////////////////////////////////////////////////////
                                                                                                                                                                                                                                                                                                                                  // ciklene po vytreshni childove pushvane vyv vektor na stoinosti//
                                                                                                                                                                                                                                                                                                                                  //sredno aritmetichno za ocenkite za student//
                                                                                                                                                                                                                                                                                                                                  vector<double> ocenki;
                                                                                                                                                                                                                                                                                                                                  for (pugi::xml_node student = singleStudent; student; student=student.next_sibling("Student")) {
                                                                                                                                                                                                                                                                                                                                      cout <<"------"<< student.child("exams").find_child_by_attribute("exam", "name", "himiq").attribute("ocenka").value() << "\n";
                                                                                                                                                                                                                                                                                                                                      
                                                                                                                                                                                                                                                                                                                                      for (pugi::xml_node  exam = student.child("exams").child("exam") ; exam; exam = exam.next_sibling("exam")) {
                                                                                                                                                                                                                                                                                                                                          
                                                                                                                                                                                                                                                                                                                                          ocenki.push_back(exam.attribute("ocenka").as_double());
                                                                                                                                                                                                                                                                                                                                          
                                                                                                                                                                                                                                                                                                                                      }
                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                  double sum , avr = 0 ;
                                                                                                                                                                                                                                                                                                                                  for (int i = 0; i < ocenki.size(); i++) {
                                                                                                                                                                                                                                                                                                                                      sum += ocenki.at(i);
                                                                                                                                                                                                                                                                                                                                  }
                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                  avr = sum / ocenki.size();
                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                  cout << "Average" <<avr;
                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                  return 0;
                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                              }
                                                                                                                                                                                                                                                                                                                              
                                                                                                                                                                                                                                                                                                                              void addInVector(){
                                                                                                                                                                                                                                                                                                                                  pugi::xml_document doc;
                                                                                                                                                                                                                                                                                                                                  pugi::xml_node nodeObjekt = doc.child("CATALOG");
                                                                                                                                                                                                                                                                                                                                  pugi::xml_node cd = nodeObjekt.child("CD");
                                                                                                                                                                                                                                                                                                                                  //   pugi::xml_node cd = nodeObjekt.child("CD");
                                                                                                                                                                                                                                                                                                                                  
                                                                                                                                                                                                                                                                                                                                  vector<Cd>v_cds;
                                                                                                                                                                                                                                                                                                                                  //child example//
