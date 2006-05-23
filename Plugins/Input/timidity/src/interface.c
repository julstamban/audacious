/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

#include <glib.h>
#include <glib/gi18n.h>
#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "interface.h"

GtkWidget*
create_xmmstimid_conf_wnd (void)
{
  GtkWidget *xmmstimid_conf_wnd;
  GtkWidget *vbox4;
  GtkWidget *table1;
  GtkWidget *frame1;
  GtkWidget *vbox1;
  GSList *rate_group = NULL;
  GtkWidget *rate_11000;
  GtkWidget *rate_22000;
  GtkWidget *rate_44100;
  GtkWidget *frame2;
  GtkWidget *vbox2;
  GSList *bits_group = NULL;
  GtkWidget *bits_8;
  GtkWidget *bits_16;
  GtkWidget *frame3;
  GtkWidget *vbox3;
  GSList *channels_group = NULL;
  GtkWidget *channels_1;
  GtkWidget *channels_2;
  GtkWidget *frame4;
  GtkWidget *vbox5;
  GtkWidget *config_file;
  GtkWidget *hseparator1;
  GtkWidget *hbuttonbox1;
  GtkWidget *conf_ok;
  GtkWidget *button2;

  xmmstimid_conf_wnd = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  g_object_set_data (G_OBJECT (xmmstimid_conf_wnd), "xmmstimid_conf_wnd", xmmstimid_conf_wnd);
  gtk_window_set_title (GTK_WINDOW (xmmstimid_conf_wnd), _("TiMidity Configuration"));
  gtk_window_set_position (GTK_WINDOW (xmmstimid_conf_wnd), GTK_WIN_POS_MOUSE);

  vbox4 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox4);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "vbox4", vbox4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox4);
  gtk_container_add (GTK_CONTAINER (xmmstimid_conf_wnd), vbox4);

  table1 = gtk_table_new (3, 2, FALSE);
  gtk_widget_ref (table1);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "table1", table1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (table1);
  gtk_box_pack_start (GTK_BOX (vbox4), table1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (table1), 10);
  gtk_table_set_row_spacings (GTK_TABLE (table1), 5);
  gtk_table_set_col_spacings (GTK_TABLE (table1), 5);

  frame1 = gtk_frame_new (_("Sampling Rate"));
  gtk_widget_ref (frame1);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "frame1", frame1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame1);
  gtk_table_attach (GTK_TABLE (table1), frame1, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox1);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "vbox1", vbox1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox1);
  gtk_container_add (GTK_CONTAINER (frame1), vbox1);
  gtk_container_set_border_width (GTK_CONTAINER (vbox1), 5);

  rate_11000 = gtk_radio_button_new_with_label (rate_group, _("11000 Hz"));
  rate_group = gtk_radio_button_group (GTK_RADIO_BUTTON (rate_11000));
  gtk_widget_ref (rate_11000);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "rate_11000", rate_11000,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (rate_11000);
  gtk_box_pack_start (GTK_BOX (vbox1), rate_11000, FALSE, FALSE, 0);

  rate_22000 = gtk_radio_button_new_with_label (rate_group, _("22000 Hz"));
  rate_group = gtk_radio_button_group (GTK_RADIO_BUTTON (rate_22000));
  gtk_widget_ref (rate_22000);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "rate_22000", rate_22000,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (rate_22000);
  gtk_box_pack_start (GTK_BOX (vbox1), rate_22000, FALSE, FALSE, 0);

  rate_44100 = gtk_radio_button_new_with_label (rate_group, _("44100 Hz"));
  rate_group = gtk_radio_button_group (GTK_RADIO_BUTTON (rate_44100));
  gtk_widget_ref (rate_44100);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "rate_44100", rate_44100,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (rate_44100);
  gtk_box_pack_start (GTK_BOX (vbox1), rate_44100, FALSE, FALSE, 0);

  frame2 = gtk_frame_new (_("Sample Width"));
  gtk_widget_ref (frame2);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "frame2", frame2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame2);
  gtk_table_attach (GTK_TABLE (table1), frame2, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox2);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "vbox2", vbox2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox2);
  gtk_container_add (GTK_CONTAINER (frame2), vbox2);
  gtk_container_set_border_width (GTK_CONTAINER (vbox2), 5);

  bits_8 = gtk_radio_button_new_with_label (bits_group, _("8 bit"));
  bits_group = gtk_radio_button_group (GTK_RADIO_BUTTON (bits_8));
  gtk_widget_ref (bits_8);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "bits_8", bits_8,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (bits_8);
  gtk_box_pack_start (GTK_BOX (vbox2), bits_8, FALSE, FALSE, 0);

  bits_16 = gtk_radio_button_new_with_label (bits_group, _("16 bit"));
  bits_group = gtk_radio_button_group (GTK_RADIO_BUTTON (bits_16));
  gtk_widget_ref (bits_16);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "bits_16", bits_16,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (bits_16);
  gtk_box_pack_start (GTK_BOX (vbox2), bits_16, FALSE, FALSE, 0);

  frame3 = gtk_frame_new (_("Channels"));
  gtk_widget_ref (frame3);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "frame3", frame3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame3);
  gtk_table_attach (GTK_TABLE (table1), frame3, 0, 1, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  vbox3 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox3);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "vbox3", vbox3,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox3);
  gtk_container_add (GTK_CONTAINER (frame3), vbox3);
  gtk_container_set_border_width (GTK_CONTAINER (vbox3), 5);

  channels_1 = gtk_radio_button_new_with_label (channels_group, _("Mono"));
  channels_group = gtk_radio_button_group (GTK_RADIO_BUTTON (channels_1));
  gtk_widget_ref (channels_1);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "channels_1", channels_1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (channels_1);
  gtk_box_pack_start (GTK_BOX (vbox3), channels_1, FALSE, FALSE, 0);

  channels_2 = gtk_radio_button_new_with_label (channels_group, _("Stereo"));
  channels_group = gtk_radio_button_group (GTK_RADIO_BUTTON (channels_2));
  gtk_widget_ref (channels_2);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "channels_2", channels_2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (channels_2);
  gtk_box_pack_start (GTK_BOX (vbox3), channels_2, FALSE, FALSE, 0);

  frame4 = gtk_frame_new (_("TiMidity Configuration File"));
  gtk_widget_ref (frame4);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "frame4", frame4,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (frame4);
  gtk_table_attach (GTK_TABLE (table1), frame4, 0, 2, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  vbox5 = gtk_vbox_new (FALSE, 0);
  gtk_widget_ref (vbox5);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "vbox5", vbox5,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (vbox5);
  gtk_container_add (GTK_CONTAINER (frame4), vbox5);
  gtk_container_set_border_width (GTK_CONTAINER (vbox5), 5);

  config_file = gtk_entry_new ();
  gtk_widget_ref (config_file);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "config_file", config_file,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (config_file);
  gtk_box_pack_start (GTK_BOX (vbox5), config_file, TRUE, TRUE, 0);

  hseparator1 = gtk_hseparator_new ();
  gtk_widget_ref (hseparator1);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "hseparator1", hseparator1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hseparator1);
  gtk_box_pack_start (GTK_BOX (vbox4), hseparator1, TRUE, TRUE, 0);

  hbuttonbox1 = gtk_hbutton_box_new ();
  gtk_widget_ref (hbuttonbox1);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "hbuttonbox1", hbuttonbox1,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (hbuttonbox1);
  gtk_box_pack_start (GTK_BOX (vbox4), hbuttonbox1, TRUE, TRUE, 0);
  gtk_container_set_border_width (GTK_CONTAINER (hbuttonbox1), 5);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (hbuttonbox1), GTK_BUTTONBOX_END);
  gtk_button_box_set_spacing (GTK_BUTTON_BOX (hbuttonbox1), 10);

  conf_ok = gtk_button_new_with_label (_("Ok"));
  gtk_widget_ref (conf_ok);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "conf_ok", conf_ok,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (conf_ok);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), conf_ok);
  GTK_WIDGET_SET_FLAGS (conf_ok, GTK_CAN_DEFAULT);

  button2 = gtk_button_new_with_label (_("Cancel"));
  gtk_widget_ref (button2);
  g_object_set_data_full (G_OBJECT (xmmstimid_conf_wnd), "button2", button2,
                            (GtkDestroyNotify) gtk_widget_unref);
  gtk_widget_show (button2);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), button2);
  GTK_WIDGET_SET_FLAGS (button2, GTK_CAN_DEFAULT);

  g_signal_connect_swapped (G_OBJECT (button2), "clicked",
                             G_CALLBACK (gtk_widget_hide),
                             GTK_OBJECT (xmmstimid_conf_wnd));

  gtk_widget_grab_focus (conf_ok);
  gtk_widget_grab_default (conf_ok);
  return xmmstimid_conf_wnd;
}
