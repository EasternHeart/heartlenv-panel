/* automatically generated from tasklist-dialog.glade */
#ifdef __SUNPRO_C
#pragma align 4 (tasklist_dialog_ui)
#endif
#ifdef __GNUC__
static const char tasklist_dialog_ui[] __attribute__ ((__aligned__ (4))) =
#else
static const char tasklist_dialog_ui[] =
#endif
{
  "<?xml version=\"1.0\"?><interface><requires lib=\"gtk+\" version=\"2.14"
  "\"/><object class=\"XfceTitledDialog\" id=\"dialog\"><property name=\"t"
  "itle\" translatable=\"yes\">Window Buttons</property><property name=\"i"
  "con_name\">gtk-properties</property><property name=\"type_hint\">normal"
  "</property><child internal-child=\"vbox\"><object class=\"GtkVBox\" id="
  "\"dialog-vbox2\"><property name=\"visible\">True</property><property na"
  "me=\"orientation\">vertical</property><property name=\"spacing\">2</pro"
  "perty><child><object class=\"GtkVBox\" id=\"vbox1\"><property name=\"vi"
  "sible\">True</property><property name=\"border_width\">6</property><pro"
  "perty name=\"orientation\">vertical</property><property name=\"spacing\""
  ">6</property><child><object class=\"GtkFrame\" id=\"frame3\"><property "
  "name=\"visible\">True</property><property name=\"label_xalign\">0</prop"
  "erty><property name=\"shadow_type\">none</property><child><object class"
  "=\"GtkAlignment\" id=\"alignment3\"><property name=\"visible\">True</pr"
  "operty><property name=\"left_padding\">12</property><child><object clas"
  "s=\"GtkVBox\" id=\"vbox3\"><property name=\"visible\">True</property><p"
  "roperty name=\"border_width\">6</property><property name=\"orientation\""
  ">vertical</property><property name=\"spacing\">6</property><child><obje"
  "ct class=\"GtkCheckButton\" id=\"show-labels\"><property name=\"label\""
  " translatable=\"yes\">Show button _labels</property><property name=\"vi"
  "sible\">True</property><property name=\"can_focus\">True</property><pro"
  "perty name=\"receives_default\">False</property><property name=\"use_un"
  "derline\">True</property><property name=\"draw_indicator\">True</proper"
  "ty></object><packing><property name=\"position\">0</property></packing>"
  "</child><child><object class=\"GtkCheckButton\" id=\"flat-buttons\"><pr"
  "operty name=\"label\" translatable=\"yes\">Show _flat buttons</property"
  "><property name=\"visible\">True</property><property name=\"can_focus\""
  ">True</property><property name=\"receives_default\">False</property><pr"
  "operty name=\"use_underline\">True</property><property name=\"draw_indi"
  "cator\">True</property></object><packing><property name=\"position\">1<"
  "/property></packing></child><child><object class=\"GtkCheckButton\" id="
  "\"show-handle\"><property name=\"label\" translatable=\"yes\">Show _han"
  "dle</property><property name=\"visible\">True</property><property name="
  "\"can_focus\">True</property><property name=\"receives_default\">False<"
  "/property><property name=\"use_underline\">True</property><property nam"
  "e=\"draw_indicator\">True</property></object><packing><property name=\""
  "position\">2</property></packing></child><child><object class=\"GtkChec"
  "kButton\" id=\"rotate-vertically\"><property name=\"label\" translatabl"
  "e=\"yes\">Ro_tate buttons in vertical panel</property><property name=\""
  "visible\">True</property><property name=\"can_focus\">True</property><p"
  "roperty name=\"receives_default\">False</property><property name=\"use_"
  "underline\">True</property><property name=\"draw_indicator\">True</prop"
  "erty></object><packing><property name=\"position\">3</property></packin"
  "g></child><child><object class=\"GtkHBox\" id=\"hbox2\"><property name="
  "\"visible\">True</property><property name=\"spacing\">12</property><chi"
  "ld><object class=\"GtkLabel\" id=\"label5\"><property name=\"visible\">"
  "True</property><property name=\"label\" translatable=\"yes\">Sorting _o"
  "rder:</property><property name=\"use_underline\">True</property><proper"
  "ty name=\"mnemonic_widget\">sort-order</property></object><packing><pro"
  "perty name=\"expand\">False</property><property name=\"position\">0</pr"
  "operty></packing></child><child><object class=\"GtkComboBox\" id=\"sort"
  "-order\"><property name=\"visible\">True</property><property name=\"mod"
  "el\">sort-order-model</property><child><object class=\"GtkCellRendererT"
  "ext\" id=\"cellrenderertext1\"/><attributes><attribute name=\"text\">0<"
  "/attribute></attributes></child></object><packing><property name=\"expa"
  "nd\">False</property><property name=\"position\">1</property></packing>"
  "</child></object><packing><property name=\"position\">4</property></pac"
  "king></child></object></child></object></child><child type=\"label\"><o"
  "bject class=\"GtkLabel\" id=\"label1\"><property name=\"visible\">True<"
  "/property><property name=\"label\" translatable=\"yes\">Appearance</pro"
  "perty><attributes><attribute name=\"weight\" value=\"bold\"/></attribut"
  "es></object></child></object><packing><property name=\"expand\">False</"
  "property><property name=\"position\">0</property></packing></child><chi"
  "ld><object class=\"GtkFrame\" id=\"frame1\"><property name=\"visible\">"
  "True</property><property name=\"label_xalign\">0</property><property na"
  "me=\"shadow_type\">none</property><child><object class=\"GtkAlignment\""
  " id=\"alignment1\"><property name=\"visible\">True</property><property "
  "name=\"left_padding\">12</property><child><object class=\"GtkVBox\" id="
  "\"vbox2\"><property name=\"visible\">True</property><property name=\"bo"
  "rder_width\">6</property><property name=\"orientation\">vertical</prope"
  "rty><property name=\"spacing\">6</property><child><object class=\"GtkHB"
  "ox\" id=\"hbox1\"><property name=\"visible\">True</property><property n"
  "ame=\"spacing\">12</property><child><object class=\"GtkLabel\" id=\"lab"
  "el4\"><property name=\"visible\">True</property><property name=\"xalign"
  "\">0</property><property name=\"label\" translatable=\"yes\">Window _gr"
  "ouping:</property><property name=\"use_underline\">True</property><prop"
  "erty name=\"mnemonic_widget\">grouping</property></object><packing><pro"
  "perty name=\"expand\">False</property><property name=\"position\">0</pr"
  "operty></packing></child><child><object class=\"GtkComboBox\" id=\"grou"
  "ping\"><property name=\"visible\">True</property><property name=\"model"
  "\">grouping-model</property><child><object class=\"GtkCellRendererText\""
  " id=\"cellrenderertext2\"/><attributes><attribute name=\"text\">0</attr"
  "ibute></attributes></child></object><packing><property name=\"expand\">"
  "False</property><property name=\"position\">1</property></packing></chi"
  "ld></object><packing><property name=\"position\">0</property></packing>"
  "</child><child><object class=\"GtkCheckButton\" id=\"switch-workspace-o"
  "n-unminimize\"><property name=\"label\" translatable=\"yes\">Restore mi"
  "nimized windows to current _workspace</property><property name=\"visibl"
  "e\">True</property><property name=\"can_focus\">True</property><propert"
  "y name=\"receives_default\">False</property><property name=\"use_underl"
  "ine\">True</property><property name=\"draw_indicator\">True</property><"
  "/object><packing><property name=\"position\">1</property></packing></ch"
  "ild><child><object class=\"GtkCheckButton\" id=\"show-wireframes\"><pro"
  "perty name=\"label\" translatable=\"yes\">D_raw window frame when hover"
  "ing a button</property><property name=\"visible\">True</property><prope"
  "rty name=\"can_focus\">True</property><property name=\"receives_default"
  "\">False</property><property name=\"use_underline\">True</property><pro"
  "perty name=\"draw_indicator\">True</property></object><packing><propert"
  "y name=\"position\">2</property></packing></child></object></child></ob"
  "ject></child><child type=\"label\"><object class=\"GtkLabel\" id=\"labe"
  "l3\"><property name=\"visible\">True</property><property name=\"label\""
  " translatable=\"yes\">Behaviour</property><attributes><attribute name=\""
  "weight\" value=\"bold\"/></attributes></object></child></object><packin"
  "g><property name=\"expand\">False</property><property name=\"position\""
  ">1</property></packing></child><child><object class=\"GtkFrame\" id=\"f"
  "rame2\"><property name=\"visible\">True</property><property name=\"labe"
  "l_xalign\">0</property><property name=\"shadow_type\">none</property><c"
  "hild><object class=\"GtkAlignment\" id=\"alignment2\"><property name=\""
  "visible\">True</property><property name=\"left_padding\">12</property><"
  "child><object class=\"GtkVBox\" id=\"vbox4\"><property name=\"visible\""
  ">True</property><property name=\"border_width\">6</property><property n"
  "ame=\"orientation\">vertical</property><property name=\"spacing\">6</pr"
  "operty><child><object class=\"GtkCheckButton\" id=\"include-all-workspa"
  "ces\"><property name=\"label\" translatable=\"yes\">Show windows from _"
  "all workspaces or viewports</property><property name=\"visible\">True</"
  "property><property name=\"can_focus\">True</property><property name=\"r"
  "eceives_default\">False</property><property name=\"use_underline\">True"
  "</property><property name=\"draw_indicator\">True</property></object><p"
  "acking><property name=\"position\">0</property></packing></child><child"
  "><object class=\"GtkCheckButton\" id=\"show-only-minimized\"><property "
  "name=\"label\" translatable=\"yes\">Show only _minimized windows</prope"
  "rty><property name=\"visible\">True</property><property name=\"can_focu"
  "s\">True</property><property name=\"receives_default\">False</property>"
  "<property name=\"use_underline\">True</property><property name=\"draw_i"
  "ndicator\">True</property></object><packing><property name=\"position\""
  ">1</property></packing></child><child><object class=\"GtkCheckButton\" "
  "id=\"include-all-monitors\"><property name=\"label\" translatable=\"yes"
  "\">Show windows from all mo_nitors</property><property name=\"visible\""
  ">True</property><property name=\"can_focus\">True</property><property n"
  "ame=\"receives_default\">False</property><property name=\"use_underline"
  "\">True</property><property name=\"draw_indicator\">True</property></ob"
  "ject><packing><property name=\"position\">1</property></packing></child"
  "></object></child></object></child><child type=\"label\"><object class="
  "\"GtkLabel\" id=\"label2\"><property name=\"visible\">True</property><p"
  "roperty name=\"label\" translatable=\"yes\">Filtering</property><attrib"
  "utes><attribute name=\"weight\" value=\"bold\"/></attributes></object><"
  "/child></object><packing><property name=\"position\">2</property></pack"
  "ing></child></object><packing><property name=\"expand\">False</property"
  "><property name=\"position\">1</property></packing></child><child inter"
  "nal-child=\"action_area\"><object class=\"GtkHButtonBox\" id=\"dialog-a"
  "ction_area2\"><property name=\"visible\">True</property><property name="
  "\"layout_style\">end</property><child><object class=\"GtkButton\" id=\""
  "close-button\"><property name=\"label\">gtk-close</property><property n"
  "ame=\"visible\">True</property><property name=\"can_focus\">True</prope"
  "rty><property name=\"receives_default\">True</property><property name=\""
  "use_stock\">True</property></object><packing><property name=\"expand\">"
  "False</property><property name=\"fill\">False</property><property name="
  "\"position\">0</property></packing></child><child><object class=\"GtkBu"
  "tton\" id=\"help-button\"><property name=\"label\">gtk-help</property><"
  "property name=\"visible\">True</property><property name=\"can_focus\">T"
  "rue</property><property name=\"receives_default\">True</property><prope"
  "rty name=\"use_stock\">True</property></object><packing><property name="
  "\"expand\">False</property><property name=\"fill\">False</property><pro"
  "perty name=\"position\">1</property><property name=\"secondary\">True</"
  "property></packing></child></object><packing><property name=\"expand\">"
  "False</property><property name=\"pack_type\">end</property><property na"
  "me=\"position\">0</property></packing></child></object></child><action-"
  "widgets><action-widget response=\"0\">close-button</action-widget><acti"
  "on-widget response=\"0\">help-button</action-widget></action-widgets></"
  "object><object class=\"GtkListStore\" id=\"grouping-model\"><columns><c"
  "olumn type=\"gchararray\"/></columns><data><row><col id=\"0\" translata"
  "ble=\"yes\">Never</col></row><row><col id=\"0\" translatable=\"yes\">Al"
  "ways</col></row><row><col id=\"0\" translatable=\"yes\">When space is l"
  "imited</col></row></data></object><object class=\"GtkListStore\" id=\"s"
  "ort-order-model\"><columns><column type=\"gchararray\"/></columns><data"
  "><row><col id=\"0\" translatable=\"yes\">Timestamp</col></row><row><col"
  " id=\"0\" translatable=\"yes\">Group title and timestamp</col></row><ro"
  "w><col id=\"0\" translatable=\"yes\">Window title</col></row><row><col "
  "id=\"0\" translatable=\"yes\">Group title and window title</col></row><"
  "row><col id=\"0\" translatable=\"yes\">None, allow drag-and-drop</col><"
  "/row></data></object></interface>"
};

static const unsigned tasklist_dialog_ui_length = 11534u;

