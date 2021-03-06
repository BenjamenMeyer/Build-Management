/* GTK - The GIMP Toolkit
 * Copyright (C) 1995-1997 Peter Mattis, Spencer Kimball and Josh MacDonald
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

/*
 * Modified by the GTK+ Team and others 1997-1999.  See the AUTHORS
 * file for a list of people on the GTK+ Team.  See the ChangeLog
 * files for a list of changes.  These files are distributed with
 * GTK+ at ftp://ftp.gtk.org/pub/gtk/. 
 */

#ifndef __GTK_LIST_ITEM_H__
#define __GTK_LIST_ITEM_H__


#include <gdk/gdk.h>
#include <gtk/gtkitem.h>


#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


#define GTK_TYPE_LIST_ITEM              (gtk_list_item_get_type ())
#define GTK_LIST_ITEM(obj)              (GTK_CHECK_CAST ((obj), GTK_TYPE_LIST_ITEM, GtkListItem))
#define GTK_LIST_ITEM_CLASS(klass)      (GTK_CHECK_CLASS_CAST ((klass), GTK_TYPE_LIST_ITEM, GtkListItemClass))
#define GTK_IS_LIST_ITEM(obj)           (GTK_CHECK_TYPE ((obj), GTK_TYPE_LIST_ITEM))
#define GTK_IS_LIST_ITEM_CLASS(klass)   (GTK_CHECK_CLASS_TYPE ((klass), GTK_TYPE_LIST_ITEM))
#define GTK_LIST_ITEM_GET_CLASS(obj)    (GTK_CHECK_GET_CLASS ((obj), GTK_TYPE_LIST_ITEM, GtkListItemClass))


typedef struct _GtkListItem       GtkListItem;
typedef struct _GtkListItemClass  GtkListItemClass;

struct _GtkListItem
{
  GtkItem item;
};

struct _GtkListItemClass
{
  GtkItemClass parent_class;

  void (*toggle_focus_row)  (GtkListItem   *list_item);
  void (*select_all)        (GtkListItem   *list_item);
  void (*unselect_all)      (GtkListItem   *list_item);
  void (*undo_selection)    (GtkListItem   *list_item);
  void (*start_selection)   (GtkListItem   *list_item);
  void (*end_selection)     (GtkListItem   *list_item);
  void (*extend_selection)  (GtkListItem   *list_item,
			     GtkScrollType  scroll_type,
			     gfloat         position,
			     gboolean       auto_start_selection);
  void (*scroll_horizontal) (GtkListItem   *list_item,
			     GtkScrollType  scroll_type,
			     gfloat         position);
  void (*scroll_vertical)   (GtkListItem   *list_item,
			     GtkScrollType  scroll_type,
			     gfloat         position);
  void (*toggle_add_mode)   (GtkListItem   *list_item);
};


GtkType    gtk_list_item_get_type       (void);
GtkWidget* gtk_list_item_new            (void);
GtkWidget* gtk_list_item_new_with_label (const gchar      *label);
void       gtk_list_item_select         (GtkListItem      *list_item);
void       gtk_list_item_deselect       (GtkListItem      *list_item);




#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* __GTK_LIST_ITEM_H__ */
