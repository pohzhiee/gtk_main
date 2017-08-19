//
// Created by poh on 8/18/17.
//

#ifndef GTK_MAIN_WORKTOOLS_H
#define GTK_MAIN_WORKTOOLS_H

#include <gtkmm/grid.h>
#include <gtkmm/box.h>
#include <gtkmm/radiobutton.h>
#include <gtkmm/image.h>
#include <gdkmm/pixbuf.h>
#include "../image/img_area.h"
#include "../image/bottombar.h"


class worktools : public Gtk::Grid
{
public:
    worktools(img_area *inp, bottombar *p_btmbar);
    virtual ~worktools();
protected:
    img_area *imgarea;
    bottombar *pbtmbar;
    const unsigned int tool_no_cols = 2;
    const int tool_width=50,tool_height = 50;

    const std::string icon_dir = "../icons/";
    std::vector<std::string> tool_icon_path;
    std::vector<Gtk::RadioButton> toolbtns;
    std::vector<Glib::RefPtr<Gdk::Pixbuf>> tool_btn_pixbuf;
    std::vector<Gtk::Image> tool_btn_img;

    void add_to_grid(Gtk::RadioButton *inp_tool_btn, int &tool_count);
    void tool_func(int tool_count);
};


#endif //GTK_MAIN_WORKTOOLS_H
