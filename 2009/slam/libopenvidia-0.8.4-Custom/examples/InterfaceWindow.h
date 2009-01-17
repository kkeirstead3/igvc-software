// generated by Fast Light User Interface Designer (fluid) version 1.0106

#ifndef InterfaceWindow_h
#define InterfaceWindow_h
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Browser.H>
#include <FL/Fl_Light_Button.H>
#include <FL/Fl_Check_Button.H>
#include <openvidia/openvidia32.h>

class UserInterface {
public:
    UserInterface(Fl_Window *vidwin);
    Fl_Window *InterfaceWindow;
    Fl_Output *FeaturesMatchedOutput;
    Fl_Output *FeaturesFoundOutput;
    Fl_Button *NewRefFrameButton;
private:
    inline void cb_NewRefFrameButton_i(Fl_Button*, void*);
    static void cb_NewRefFrameButton(Fl_Button*, void*);
public:
    Fl_Button *SaveRefButton;
private:
    inline void cb_SaveRefButton_i(Fl_Button*, void*);
    static void cb_SaveRefButton(Fl_Button*, void*);
public:
    Fl_Input *SaveRefFilenameInput;
    Fl_Output *StatusOutput;
    Fl_Output *FPSOutput;
    Fl_Input *LoadRefFilenameInput;
    Fl_Button *LoadRefFileButton;
private:
    inline void cb_LoadRefFileButton_i(Fl_Button*, void*);
    static void cb_LoadRefFileButton(Fl_Button*, void*);
public:
    Fl_Browser *LoadedScenesBrowser;
    Fl_Button *RemoveSceneButton;
private:
    inline void cb_RemoveSceneButton_i(Fl_Button*, void*);
    static void cb_RemoveSceneButton(Fl_Button*, void*);
public:
    Fl_Output *MatchedToOutput;
    Fl_Light_Button *ShowFeatures;
    void show(int argc, char *argv[]);
private:
    Fl_Window *AssociatedVidWin;
    unsigned char *pixbuf; // pixel buffer for saving refernce images temporarily;
};
#endif
