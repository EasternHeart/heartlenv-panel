/* automatically generated from pager-dialog.glade */
#ifdef __SUNPRO_C
#pragma align 4 (pager_dialog_ui)
#endif
#ifdef __GNUC__
static const char pager_dialog_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char pager_dialog_ui[] =
#endif
{
  "<?xml version=\"1.0\"?><interface><requires lib=\"gtk+\" version=\"2.14"
  "\"/><object class=\"XfceTitledDialog\" id=\"dialog\"><property name=\"t"
  "itle\" translatable=\"yes\">Workspace Switcher</property><property name"
  "=\"icon_name\">gtk-properties</property><property name=\"type_hint\">no"
  "rmal</property><property name=\"has_separator\">False</property><child "
  "internal-child=\"vbox\"><object class=\"GtkVBox\" id=\"dialog-vbox2\"><"
  "property name=\"visible\">True</property><property name=\"orientation\""
  ">vertical</property><property name=\"spacing\">2</property><child><obje"
  "ct class=\"GtkVBox\" id=\"vbox2\"><property name=\"visible\">True</prop"
  "erty><property name=\"border_width\">6</property><property name=\"orien"
  "tation\">vertical</property><property name=\"spacing\">6</property><chi"
  "ld><object class=\"GtkFrame\" id=\"frame2\"><property name=\"visible\">"
  "True</property><property name=\"label_xalign\">0</property><property na"
  "me=\"shadow_type\">none</property><child><object class=\"GtkAlignment\""
  " id=\"alignment2\"><property name=\"visible\">True</property><property "
  "name=\"left_padding\">12</property><child><object class=\"GtkVBox\" id="
  "\"vbox4\"><property name=\"visible\">True</property><property name=\"bo"
  "rder_width\">6</property><property name=\"orientation\">vertical</prope"
  "rty><property name=\"spacing\">6</property><child><object class=\"GtkHB"
  "ox\" id=\"hbox3\"><property name=\"visible\">True</property><property n"
  "ame=\"spacing\">12</property><child><object class=\"GtkLabel\" id=\"lab"
  "el4\"><property name=\"visible\">True</property><property name=\"label\""
  " translatable=\"yes\">Number of _rows:</property><property name=\"use_u"
  "nderline\">True</property><property name=\"mnemonic_widget\">spin1</pro"
  "perty></object><packing><property name=\"expand\">False</property><prop"
  "erty name=\"position\">0</property></packing></child><child><object cla"
  "ss=\"GtkSpinButton\" id=\"spin1\"><property name=\"visible\">True</prop"
  "erty><property name=\"can_focus\">True</property><property name=\"adjus"
  "tment\">rows</property><property name=\"snap_to_ticks\">True</property>"
  "<property name=\"numeric\">True</property><property name=\"update_polic"
  "y\">if-valid</property></object><packing><property name=\"expand\">Fals"
  "e</property><property name=\"position\">1</property></packing></child><"
  "/object><packing><property name=\"position\">0</property></packing></ch"
  "ild><child><object class=\"GtkCheckButton\" id=\"miniature-view\"><prop"
  "erty name=\"label\" translatable=\"yes\">Show mi_niature view</property"
  "><property name=\"visible\">True</property><property name=\"can_focus\""
  ">True</property><property name=\"receives_default\">False</property><pr"
  "operty name=\"tooltip_text\" translatable=\"yes\">Show a miniature view"
  " of the workspace with rectangles for the visible windows</property><pr"
  "operty name=\"use_underline\">True</property><property name=\"draw_indi"
  "cator\">True</property></object><packing><property name=\"position\">1<"
  "/property></packing></child><child><object class=\"GtkAlignment\" id=\""
  "alignment1\"><property name=\"visible\">True</property><property name=\""
  "xalign\">0</property><property name=\"xscale\">0</property><child><obje"
  "ct class=\"GtkButton\" id=\"settings-button\"><property name=\"label\" "
  "translatable=\"yes\">Workspace _Settings...</property><property name=\""
  "visible\">True</property><property name=\"can_focus\">True</property><p"
  "roperty name=\"receives_default\">True</property><property name=\"image"
  "\">image1</property><property name=\"use_underline\">True</property></o"
  "bject></child></object><packing><property name=\"position\">2</property"
  "></packing></child></object></child></object></child><child type=\"labe"
  "l\"><object class=\"GtkLabel\" id=\"label5\"><property name=\"visible\""
  ">True</property><property name=\"label\" translatable=\"yes\">Appearanc"
  "e</property><attributes><attribute name=\"weight\" value=\"bold\"/></at"
  "tributes></object></child></object><packing><property name=\"expand\">F"
  "alse</property><property name=\"position\">0</property></packing></chil"
  "d><child><object class=\"GtkFrame\" id=\"frame3\"><property name=\"visi"
  "ble\">True</property><property name=\"label_xalign\">0</property><prope"
  "rty name=\"shadow_type\">none</property><child><object class=\"GtkAlign"
  "ment\" id=\"alignment3\"><property name=\"visible\">True</property><pro"
  "perty name=\"top_padding\">6</property><property name=\"bottom_padding\""
  ">6</property><property name=\"left_padding\">18</property><property nam"
  "e=\"right_padding\">6</property><child><object class=\"GtkCheckButton\""
  " id=\"workspace-scrolling\"><property name=\"label\" translatable=\"yes"
  "\">Switch workspaces using the mouse _wheel</property><property name=\""
  "visible\">True</property><property name=\"can_focus\">True</property><p"
  "roperty name=\"receives_default\">False</property><property name=\"use_"
  "underline\">True</property><property name=\"draw_indicator\">True</prop"
  "erty></object></child></object></child><child type=\"label\"><object cl"
  "ass=\"GtkLabel\" id=\"label7\"><property name=\"visible\">True</propert"
  "y><property name=\"label\" translatable=\"yes\">Behaviour</property><at"
  "tributes><attribute name=\"weight\" value=\"bold\"/></attributes></obje"
  "ct></child></object><packing><property name=\"expand\">False</property>"
  "<property name=\"position\">1</property></packing></child></object><pac"
  "king><property name=\"position\">1</property></packing></child><child i"
  "nternal-child=\"action_area\"><object class=\"GtkHButtonBox\" id=\"dial"
  "og-action_area2\"><property name=\"visible\">True</property><property n"
  "ame=\"layout_style\">end</property><child><object class=\"GtkButton\" i"
  "d=\"close-button\"><property name=\"label\">gtk-close</property><proper"
  "ty name=\"visible\">True</property><property name=\"can_focus\">True</p"
  "roperty><property name=\"receives_default\">True</property><property na"
  "me=\"use_stock\">True</property></object><packing><property name=\"expa"
  "nd\">False</property><property name=\"fill\">False</property><property "
  "name=\"position\">0</property></packing></child><child><object class=\""
  "GtkButton\" id=\"help-button\"><property name=\"label\">gtk-help</prope"
  "rty><property name=\"visible\">True</property><property name=\"can_focu"
  "s\">True</property><property name=\"receives_default\">True</property><"
  "property name=\"use_stock\">True</property></object><packing><property "
  "name=\"expand\">False</property><property name=\"fill\">False</property"
  "><property name=\"position\">1</property><property name=\"secondary\">T"
  "rue</property></packing></child></object><packing><property name=\"expa"
  "nd\">False</property><property name=\"pack_type\">end</property><proper"
  "ty name=\"position\">0</property></packing></child></object></child><ac"
  "tion-widgets><action-widget response=\"0\">close-button</action-widget>"
  "<action-widget response=\"0\">help-button</action-widget></action-widge"
  "ts></object><object class=\"GtkImage\" id=\"image1\"><property name=\"v"
  "isible\">True</property><property name=\"icon_name\">xfce4-workspaces</"
  "property></object><object class=\"GtkAdjustment\" id=\"rows\"><property"
  " name=\"value\">1</property><property name=\"lower\">1</property><prope"
  "rty name=\"upper\">10</property><property name=\"step_increment\">1</pr"
  "operty><property name=\"page_increment\">10</property></object></interf"
  "ace>"
};

static const unsigned pager_dialog_ui_length = 6834u;

