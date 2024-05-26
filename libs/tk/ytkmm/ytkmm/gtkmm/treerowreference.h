// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GTKMM_TREEROWREFERENCE_H
#define _GTKMM_TREEROWREFERENCE_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: treerowreference.hg,v 1.7 2006/04/12 11:11:25 murrayc Exp $ */

/* Copyright (C) 2002 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */


#include <gtkmm/treepath.h>
#include <gtkmm/treemodel.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _GtkTreeRowReference GtkTreeRowReference; }
#endif

namespace Gtk
{

/** Typedefed as Gtk::TreeModel::RowReference.
 * This reference will keep pointing to
 * the node pointed to by the Path, so long as it exists.  It listens to all
 * signals emitted by the Model, and updates its Path appropriately.
 * @ingroup TreeView
*/
class TreeRowReference
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef TreeRowReference CppObjectType;
  typedef GtkTreeRowReference BaseObjectType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type() G_GNUC_CONST;

  TreeRowReference();

  explicit TreeRowReference(GtkTreeRowReference* gobject, bool make_a_copy = true);

  TreeRowReference(const TreeRowReference& other);
  TreeRowReference& operator=(const TreeRowReference& other);

  ~TreeRowReference();

  void swap(TreeRowReference& other);

  ///Provides access to the underlying C instance.
  GtkTreeRowReference*       gobj()       { return gobject_; }

  ///Provides access to the underlying C instance.
  const GtkTreeRowReference* gobj() const { return gobject_; }

  ///Provides access to the underlying C instance. The caller is responsible for freeing it. Use when directly setting fields in structs.
  GtkTreeRowReference* gobj_copy() const;

protected:
  GtkTreeRowReference* gobject_;

private:

  
public:
  TreeRowReference(const Glib::RefPtr<TreeModel>& model, const TreeModel::Path& path);

  ///The same as is_valid().
  operator bool() const;

  
  /** Returns a path that the row reference currently points to, or <tt>0</tt> if the
   * path pointed to is no longer valid.
   * 
   * @return A current path, or <tt>0</tt>.
   */
  TreeModel::Path get_path() const;

  
  /** Returns the model that the row reference is monitoring.
   * 
   * @return The model.
   */
  Glib::RefPtr<TreeModel> get_model();
  
  /** Returns the model that the row reference is monitoring.
   * 
   * @return The model.
   */
  Glib::RefPtr<const TreeModel> get_model() const;

  
  /** Returns <tt>true</tt> if the @a reference is non-<tt>0</tt> and refers to a current valid
   * path.
   * 
   * @return <tt>true</tt> if @a reference points to a valid path.
   */
  bool is_valid() const;


};

} // namespace Gtk


namespace Gtk
{

/** @relates Gtk::TreeRowReference
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 */
inline void swap(TreeRowReference& lhs, TreeRowReference& rhs)
  { lhs.swap(rhs); }

} // namespace Gtk

namespace Glib
{

/** A Glib::wrap() method for this object.
 * 
 * @param object The C instance.
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 *
 * @relates Gtk::TreeRowReference
 */
Gtk::TreeRowReference wrap(GtkTreeRowReference* object, bool take_copy = false);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
template <>
class Value<Gtk::TreeRowReference> : public Glib::Value_Boxed<Gtk::TreeRowReference>
{};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} // namespace Glib


#endif /* _GTKMM_TREEROWREFERENCE_H */

