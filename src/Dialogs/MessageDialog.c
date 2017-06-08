/* MessageDialog.c generated by valac 0.34.8, the Vala compiler
 * generated from MessageDialog.vala, do not modify */

/*
* Copyright (c) 2017 elementary LLC. (https://elementary.io)
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public
* License as published by the Free Software Foundation; either
* version 2 of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* General Public License for more details.
*
* You should have received a copy of the GNU General Public
* License along with this program; if not, write to the
* Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
* Boston, MA 02110-1301 USA
*/

#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>


#define APP_CENTER_TYPE_MESSAGE_DIALOG (app_center_message_dialog_get_type ())
#define APP_CENTER_MESSAGE_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), APP_CENTER_TYPE_MESSAGE_DIALOG, AppCenterMessageDialog))
#define APP_CENTER_MESSAGE_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), APP_CENTER_TYPE_MESSAGE_DIALOG, AppCenterMessageDialogClass))
#define APP_CENTER_IS_MESSAGE_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), APP_CENTER_TYPE_MESSAGE_DIALOG))
#define APP_CENTER_IS_MESSAGE_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), APP_CENTER_TYPE_MESSAGE_DIALOG))
#define APP_CENTER_MESSAGE_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), APP_CENTER_TYPE_MESSAGE_DIALOG, AppCenterMessageDialogClass))

typedef struct _AppCenterMessageDialog AppCenterMessageDialog;
typedef struct _AppCenterMessageDialogClass AppCenterMessageDialogClass;
typedef struct _AppCenterMessageDialogPrivate AppCenterMessageDialogPrivate;
#define _g_free0(var) (var = (g_free (var), NULL))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _AppCenterMessageDialog {
	GtkDialog parent_instance;
	AppCenterMessageDialogPrivate * priv;
};

struct _AppCenterMessageDialogClass {
	GtkDialogClass parent_class;
};

struct _AppCenterMessageDialogPrivate {
	gchar* _primary_text;
	gchar* _secondary_text;
	gchar* _image_icon_name;
};


static gpointer app_center_message_dialog_parent_class = NULL;

GType app_center_message_dialog_get_type (void) G_GNUC_CONST;
#define APP_CENTER_MESSAGE_DIALOG_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), APP_CENTER_TYPE_MESSAGE_DIALOG, AppCenterMessageDialogPrivate))
enum  {
	APP_CENTER_MESSAGE_DIALOG_DUMMY_PROPERTY,
	APP_CENTER_MESSAGE_DIALOG_PRIMARY_TEXT,
	APP_CENTER_MESSAGE_DIALOG_SECONDARY_TEXT,
	APP_CENTER_MESSAGE_DIALOG_IMAGE_ICON_NAME
};
AppCenterMessageDialog* app_center_message_dialog_new (const gchar* primary_text, const gchar* secondary_text, const gchar* image_icon_name);
AppCenterMessageDialog* app_center_message_dialog_construct (GType object_type, const gchar* primary_text, const gchar* secondary_text, const gchar* image_icon_name);
const gchar* app_center_message_dialog_get_primary_text (AppCenterMessageDialog* self);
void app_center_message_dialog_set_primary_text (AppCenterMessageDialog* self, const gchar* value);
const gchar* app_center_message_dialog_get_secondary_text (AppCenterMessageDialog* self);
void app_center_message_dialog_set_secondary_text (AppCenterMessageDialog* self, const gchar* value);
const gchar* app_center_message_dialog_get_image_icon_name (AppCenterMessageDialog* self);
void app_center_message_dialog_set_image_icon_name (AppCenterMessageDialog* self, const gchar* value);
static GObject * app_center_message_dialog_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties);
static void app_center_message_dialog_finalize (GObject* obj);
static void _vala_app_center_message_dialog_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec);
static void _vala_app_center_message_dialog_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec);


AppCenterMessageDialog* app_center_message_dialog_construct (GType object_type, const gchar* primary_text, const gchar* secondary_text, const gchar* image_icon_name) {
	AppCenterMessageDialog * self = NULL;
	const gchar* _tmp0_ = NULL;
	const gchar* _tmp1_ = NULL;
	const gchar* _tmp2_ = NULL;
#line 25 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_return_val_if_fail (primary_text != NULL, NULL);
#line 25 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_return_val_if_fail (secondary_text != NULL, NULL);
#line 25 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_return_val_if_fail (image_icon_name != NULL, NULL);
#line 26 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp0_ = primary_text;
#line 26 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp1_ = secondary_text;
#line 26 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp2_ = image_icon_name;
#line 26 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	self = (AppCenterMessageDialog*) g_object_new (object_type, "resizable", FALSE, "deletable", FALSE, "skip-taskbar-hint", TRUE, "primary-text", _tmp0_, "secondary-text", _tmp1_, "image-icon-name", _tmp2_, NULL);
#line 25 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	return self;
#line 107 "MessageDialog.c"
}


AppCenterMessageDialog* app_center_message_dialog_new (const gchar* primary_text, const gchar* secondary_text, const gchar* image_icon_name) {
#line 25 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	return app_center_message_dialog_construct (APP_CENTER_TYPE_MESSAGE_DIALOG, primary_text, secondary_text, image_icon_name);
#line 114 "MessageDialog.c"
}


const gchar* app_center_message_dialog_get_primary_text (AppCenterMessageDialog* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
#line 21 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 21 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp0_ = self->priv->_primary_text;
#line 21 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	result = _tmp0_;
#line 21 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	return result;
#line 129 "MessageDialog.c"
}


void app_center_message_dialog_set_primary_text (AppCenterMessageDialog* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 21 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_return_if_fail (self != NULL);
#line 21 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp0_ = value;
#line 21 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 21 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_g_free0 (self->priv->_primary_text);
#line 21 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	self->priv->_primary_text = _tmp1_;
#line 21 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_object_notify ((GObject *) self, "primary-text");
#line 148 "MessageDialog.c"
}


const gchar* app_center_message_dialog_get_secondary_text (AppCenterMessageDialog* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
#line 22 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 22 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp0_ = self->priv->_secondary_text;
#line 22 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	result = _tmp0_;
#line 22 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	return result;
#line 163 "MessageDialog.c"
}


void app_center_message_dialog_set_secondary_text (AppCenterMessageDialog* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 22 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_return_if_fail (self != NULL);
#line 22 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp0_ = value;
#line 22 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 22 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_g_free0 (self->priv->_secondary_text);
#line 22 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	self->priv->_secondary_text = _tmp1_;
#line 22 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_object_notify ((GObject *) self, "secondary-text");
#line 182 "MessageDialog.c"
}


const gchar* app_center_message_dialog_get_image_icon_name (AppCenterMessageDialog* self) {
	const gchar* result;
	const gchar* _tmp0_ = NULL;
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp0_ = self->priv->_image_icon_name;
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	result = _tmp0_;
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	return result;
#line 197 "MessageDialog.c"
}


void app_center_message_dialog_set_image_icon_name (AppCenterMessageDialog* self, const gchar* value) {
	const gchar* _tmp0_ = NULL;
	gchar* _tmp1_ = NULL;
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_return_if_fail (self != NULL);
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp0_ = value;
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp1_ = g_strdup (_tmp0_);
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_g_free0 (self->priv->_image_icon_name);
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	self->priv->_image_icon_name = _tmp1_;
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_object_notify ((GObject *) self, "image-icon-name");
#line 216 "MessageDialog.c"
}


static gpointer _g_object_ref0 (gpointer self) {
#line 54 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	return self ? g_object_ref (self) : NULL;
#line 223 "MessageDialog.c"
}


static GObject * app_center_message_dialog_constructor (GType type, guint n_construct_properties, GObjectConstructParam * construct_properties) {
	GObject * obj;
	GObjectClass * parent_class;
	AppCenterMessageDialog * self;
	GtkImage* image = NULL;
	const gchar* _tmp0_ = NULL;
	GtkImage* _tmp1_ = NULL;
	GtkImage* _tmp2_ = NULL;
	GtkLabel* primary_label = NULL;
	const gchar* _tmp3_ = NULL;
	GtkLabel* _tmp4_ = NULL;
	GtkLabel* _tmp5_ = NULL;
	GtkStyleContext* _tmp6_ = NULL;
	GtkLabel* _tmp7_ = NULL;
	GtkLabel* _tmp8_ = NULL;
	GtkLabel* _tmp9_ = NULL;
	GtkLabel* secondary_label = NULL;
	const gchar* _tmp10_ = NULL;
	GtkLabel* _tmp11_ = NULL;
	GtkLabel* _tmp12_ = NULL;
	GtkLabel* _tmp13_ = NULL;
	GtkLabel* _tmp14_ = NULL;
	GtkGrid* grid = NULL;
	GtkGrid* _tmp15_ = NULL;
	GtkGrid* _tmp16_ = NULL;
	GtkGrid* _tmp17_ = NULL;
	GtkGrid* _tmp18_ = NULL;
	GtkGrid* _tmp19_ = NULL;
	GtkGrid* _tmp20_ = NULL;
	GtkImage* _tmp21_ = NULL;
	GtkGrid* _tmp22_ = NULL;
	GtkLabel* _tmp23_ = NULL;
	GtkGrid* _tmp24_ = NULL;
	GtkLabel* _tmp25_ = NULL;
	GtkBox* _tmp26_ = NULL;
	GtkGrid* _tmp27_ = NULL;
	GtkWidget* action_area = NULL;
	GtkWidget* _tmp28_ = NULL;
	GtkWidget* _tmp29_ = NULL;
	GtkWidget* _tmp30_ = NULL;
	GtkWidget* _tmp31_ = NULL;
	GtkWidget* _tmp32_ = NULL;
#line 29 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	parent_class = G_OBJECT_CLASS (app_center_message_dialog_parent_class);
#line 29 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 29 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, APP_CENTER_TYPE_MESSAGE_DIALOG, AppCenterMessageDialog);
#line 30 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp0_ = self->priv->_image_icon_name;
#line 30 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp1_ = (GtkImage*) gtk_image_new_from_icon_name (_tmp0_, GTK_ICON_SIZE_DIALOG);
#line 30 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_object_ref_sink (_tmp1_);
#line 30 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	image = _tmp1_;
#line 31 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp2_ = image;
#line 31 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_widget_set_valign ((GtkWidget*) _tmp2_, GTK_ALIGN_START);
#line 33 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp3_ = self->priv->_primary_text;
#line 33 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp4_ = (GtkLabel*) gtk_label_new (_tmp3_);
#line 33 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_object_ref_sink (_tmp4_);
#line 33 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	primary_label = _tmp4_;
#line 34 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp5_ = primary_label;
#line 34 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp6_ = gtk_widget_get_style_context ((GtkWidget*) _tmp5_);
#line 34 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_style_context_add_class (_tmp6_, "primary");
#line 35 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp7_ = primary_label;
#line 35 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_label_set_max_width_chars (_tmp7_, 50);
#line 36 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp8_ = primary_label;
#line 36 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_object_set (_tmp8_, "wrap", TRUE, NULL);
#line 37 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp9_ = primary_label;
#line 37 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_label_set_xalign (_tmp9_, (gfloat) 0);
#line 39 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp10_ = self->priv->_secondary_text;
#line 39 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp11_ = (GtkLabel*) gtk_label_new (_tmp10_);
#line 39 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_object_ref_sink (_tmp11_);
#line 39 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	secondary_label = _tmp11_;
#line 40 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp12_ = secondary_label;
#line 40 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_label_set_max_width_chars (_tmp12_, 50);
#line 41 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp13_ = secondary_label;
#line 41 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_object_set (_tmp13_, "wrap", TRUE, NULL);
#line 42 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp14_ = secondary_label;
#line 42 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_label_set_xalign (_tmp14_, (gfloat) 0);
#line 44 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp15_ = (GtkGrid*) gtk_grid_new ();
#line 44 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_object_ref_sink (_tmp15_);
#line 44 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	grid = _tmp15_;
#line 45 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp16_ = grid;
#line 45 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_grid_set_column_spacing (_tmp16_, 12);
#line 46 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp17_ = grid;
#line 46 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_grid_set_row_spacing (_tmp17_, 6);
#line 47 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp18_ = grid;
#line 47 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp19_ = grid;
#line 47 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_widget_set_margin_right ((GtkWidget*) _tmp19_, 12);
#line 47 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_widget_set_margin_left ((GtkWidget*) _tmp18_, 12);
#line 48 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp20_ = grid;
#line 48 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp21_ = image;
#line 48 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_grid_attach (_tmp20_, (GtkWidget*) _tmp21_, 0, 0, 1, 2);
#line 49 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp22_ = grid;
#line 49 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp23_ = primary_label;
#line 49 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_grid_attach (_tmp22_, (GtkWidget*) _tmp23_, 1, 0, 1, 1);
#line 50 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp24_ = grid;
#line 50 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp25_ = secondary_label;
#line 50 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_grid_attach (_tmp24_, (GtkWidget*) _tmp25_, 1, 1, 1, 1);
#line 52 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp26_ = (GtkBox*) gtk_dialog_get_content_area ((GtkDialog*) self);
#line 52 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp27_ = grid;
#line 52 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_container_add ((GtkContainer*) _tmp26_, (GtkWidget*) _tmp27_);
#line 54 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp28_ = gtk_dialog_get_action_area ((GtkDialog*) self);
#line 54 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp29_ = _g_object_ref0 (_tmp28_);
#line 54 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	action_area = _tmp29_;
#line 55 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp30_ = action_area;
#line 55 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_widget_set_margin_right (_tmp30_, 6);
#line 56 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp31_ = action_area;
#line 56 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_widget_set_margin_bottom (_tmp31_, 6);
#line 57 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_tmp32_ = action_area;
#line 57 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	gtk_widget_set_margin_top (_tmp32_, 14);
#line 29 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_g_object_unref0 (action_area);
#line 29 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_g_object_unref0 (grid);
#line 29 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_g_object_unref0 (secondary_label);
#line 29 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_g_object_unref0 (primary_label);
#line 29 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_g_object_unref0 (image);
#line 29 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	return obj;
#line 409 "MessageDialog.c"
}


static void app_center_message_dialog_class_init (AppCenterMessageDialogClass * klass) {
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	app_center_message_dialog_parent_class = g_type_class_peek_parent (klass);
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_type_class_add_private (klass, sizeof (AppCenterMessageDialogPrivate));
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_app_center_message_dialog_get_property;
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_app_center_message_dialog_set_property;
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	G_OBJECT_CLASS (klass)->constructor = app_center_message_dialog_constructor;
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	G_OBJECT_CLASS (klass)->finalize = app_center_message_dialog_finalize;
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), APP_CENTER_MESSAGE_DIALOG_PRIMARY_TEXT, g_param_spec_string ("primary-text", "primary-text", "primary-text", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), APP_CENTER_MESSAGE_DIALOG_SECONDARY_TEXT, g_param_spec_string ("secondary-text", "secondary-text", "secondary-text", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), APP_CENTER_MESSAGE_DIALOG_IMAGE_ICON_NAME, g_param_spec_string ("image-icon-name", "image-icon-name", "image-icon-name", NULL, G_PARAM_STATIC_NAME | G_PARAM_STATIC_NICK | G_PARAM_STATIC_BLURB | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT));
#line 432 "MessageDialog.c"
}


static void app_center_message_dialog_instance_init (AppCenterMessageDialog * self) {
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	self->priv = APP_CENTER_MESSAGE_DIALOG_GET_PRIVATE (self);
#line 439 "MessageDialog.c"
}


static void app_center_message_dialog_finalize (GObject* obj) {
	AppCenterMessageDialog * self;
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, APP_CENTER_TYPE_MESSAGE_DIALOG, AppCenterMessageDialog);
#line 21 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_g_free0 (self->priv->_primary_text);
#line 22 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_g_free0 (self->priv->_secondary_text);
#line 23 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	_g_free0 (self->priv->_image_icon_name);
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	G_OBJECT_CLASS (app_center_message_dialog_parent_class)->finalize (obj);
#line 455 "MessageDialog.c"
}


GType app_center_message_dialog_get_type (void) {
	static volatile gsize app_center_message_dialog_type_id__volatile = 0;
	if (g_once_init_enter (&app_center_message_dialog_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (AppCenterMessageDialogClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) app_center_message_dialog_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (AppCenterMessageDialog), 0, (GInstanceInitFunc) app_center_message_dialog_instance_init, NULL };
		GType app_center_message_dialog_type_id;
		app_center_message_dialog_type_id = g_type_register_static (gtk_dialog_get_type (), "AppCenterMessageDialog", &g_define_type_info, 0);
		g_once_init_leave (&app_center_message_dialog_type_id__volatile, app_center_message_dialog_type_id);
	}
	return app_center_message_dialog_type_id__volatile;
}


static void _vala_app_center_message_dialog_get_property (GObject * object, guint property_id, GValue * value, GParamSpec * pspec) {
	AppCenterMessageDialog * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, APP_CENTER_TYPE_MESSAGE_DIALOG, AppCenterMessageDialog);
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	switch (property_id) {
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		case APP_CENTER_MESSAGE_DIALOG_PRIMARY_TEXT:
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		g_value_set_string (value, app_center_message_dialog_get_primary_text (self));
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		break;
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		case APP_CENTER_MESSAGE_DIALOG_SECONDARY_TEXT:
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		g_value_set_string (value, app_center_message_dialog_get_secondary_text (self));
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		break;
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		case APP_CENTER_MESSAGE_DIALOG_IMAGE_ICON_NAME:
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		g_value_set_string (value, app_center_message_dialog_get_image_icon_name (self));
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		break;
#line 494 "MessageDialog.c"
		default:
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		break;
#line 500 "MessageDialog.c"
	}
}


static void _vala_app_center_message_dialog_set_property (GObject * object, guint property_id, const GValue * value, GParamSpec * pspec) {
	AppCenterMessageDialog * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, APP_CENTER_TYPE_MESSAGE_DIALOG, AppCenterMessageDialog);
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
	switch (property_id) {
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		case APP_CENTER_MESSAGE_DIALOG_PRIMARY_TEXT:
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		app_center_message_dialog_set_primary_text (self, g_value_get_string (value));
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		break;
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		case APP_CENTER_MESSAGE_DIALOG_SECONDARY_TEXT:
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		app_center_message_dialog_set_secondary_text (self, g_value_get_string (value));
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		break;
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		case APP_CENTER_MESSAGE_DIALOG_IMAGE_ICON_NAME:
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		app_center_message_dialog_set_image_icon_name (self, g_value_get_string (value));
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		break;
#line 528 "MessageDialog.c"
		default:
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 20 "/home/kedarbrooks/Documents/Projects/AppStore/src/Dialogs/MessageDialog.vala"
		break;
#line 534 "MessageDialog.c"
	}
}


