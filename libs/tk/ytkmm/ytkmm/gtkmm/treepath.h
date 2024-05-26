// -*- c++ -*-
// Generated by gmmproc 2.45.3 -- DO NOT MODIFY!
#ifndef _GTKMM_TREEPATH_H
#define _GTKMM_TREEPATH_H

#include <gtkmmconfig.h>


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* $Id: treepath.hg,v 1.15 2006/02/25 12:38:11 murrayc Exp $ */

/* Copyright(C) 1998-2002 The gtkmm Development Team
 *
 * This library is free software, ) you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation, ) either
 * version 2.1 of the License, or(at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY, ) without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library, ) if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

// This is for including the config header before any code (such as
// the #ifndef GTKMM_DISABLE_DEPRECATED in deprecated classes) is generated:


#include <gtkmm/selectiondata.h>
#include <gtkmm/treemodel.h>

#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _GtkTreePath GtkTreePath; }
#endif

namespace Gtk
{

/** A path is essentially a potential node. It is a location on a model that may
 * or may not actually correspond to a node on a specific model.
 *
 * A Path can be converted into either an array of unsigned integers or a string. The string
 * form is a list of numbers separated by a colon. Each number refers to the
 * offset at that level. Thus, the path "0" refers to the root node and the
 * path "2:4" refers to the fifth child of the third node.
 *
 * Typedefed as Gtk::TreeModel::Path.
 * @ingroup TreeView
 */
class TreePath
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef TreePath CppObjectType;
  typedef GtkTreePath BaseObjectType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type() G_GNUC_CONST;

  TreePath();

  explicit TreePath(GtkTreePath* gobject, bool make_a_copy = true);

  TreePath(const TreePath& other);
  TreePath& operator=(const TreePath& other);

  ~TreePath();

  void swap(TreePath& other);

  ///Provides access to the underlying C instance.
  GtkTreePath*       gobj()       { return gobject_; }

  ///Provides access to the underlying C instance.
  const GtkTreePath* gobj() const { return gobject_; }

  ///Provides access to the underlying C instance. The caller is responsible for freeing it. Use when directly setting fields in structs.
  GtkTreePath* gobj_copy() const;

protected:
  GtkTreePath* gobject_;

private:

  
public:
  typedef unsigned int  size_type;
  typedef int           difference_type;

  typedef int           value_type;
  typedef int&          reference;
  typedef const int&    const_reference;

  // Use plain pointers for simplicity.
  typedef int*          iterator;
  typedef const int*    const_iterator;

#ifndef GLIBMM_HAVE_SUN_REVERSE_ITERATOR

  typedef std::reverse_iterator<iterator>       reverse_iterator;
  typedef std::reverse_iterator<const_iterator> const_reverse_iterator;

#else

  typedef std::reverse_iterator<iterator, std::random_access_iterator_tag,
                                int, int&, int*, ptrdiff_t> reverse_iterator;

  typedef std::reverse_iterator<const_iterator, std::random_access_iterator_tag,
                                int, const int&, const int*, ptrdiff_t> const_reverse_iterator;

#endif /* GLIBMM_HAVE_SUN_REVERSE_ITERATOR */

  explicit TreePath(size_type n, value_type value = 0);
  explicit TreePath(const Glib::ustring& path);
  explicit TreePath(const TreeModel::iterator& iter);

  template <class In> inline TreePath(In pbegin, In pend);

  void clear();

  // I think it's OK for this assignment to be implicit.  It's very useful.
  TreePath& operator=(const TreeModel::iterator& iter);

  /** Checks that the path is not empty, by calling empty().
   */
  operator bool() const;

  template <class In> inline void assign(In pbegin, In pend);
  template <class In>        void append(In pbegin, In pend);

  
  /** Appends a new index to a path.  As a result, the depth of the path is
   * increased.
   * 
   * @param index The index.
   */
  void push_back(int index);
  
  /** Prepends a new index to a path.  As a result, the depth of the path is
   * increased.
   * 
   * @param index The index.
   */
  void push_front(int index);

  size_type size() const;
  bool empty() const;

  reference       operator[](size_type i);
  const_reference operator[](size_type i) const;

  iterator begin();
  iterator end();
  const_iterator begin() const;
  const_iterator end()   const;

  // Note: there is no advantage in not inlining these methods.
  // We can't change them without breaking ABI anyway.
  reverse_iterator       rbegin()       { return reverse_iterator(end());         }
  reverse_iterator       rend()         { return reverse_iterator(begin());       }
  const_reverse_iterator rbegin() const { return const_reverse_iterator(end());   }
  const_reverse_iterator rend()   const { return const_reverse_iterator(begin()); }

  reference       front()       { return *begin();  }
  const_reference front() const { return *begin();  }
  reference       back()        { return *rbegin(); }
  const_reference back()  const { return *rbegin(); }

  
  /** Moves the @a path to point to the next node at the current depth.
   */
  void next();
  
  /** Moves the @a path to point to the previous node at the current depth, 
   * if it exists.
   * 
   * @return <tt>true</tt> if @a path has a previous node, and the move was made.
   */
  bool prev();
  
  /** Moves the @a path to point to its parent node, if it has a parent.
   * 
   * @return <tt>true</tt> if @a path has a parent, and the move was made.
   */
  bool up();
  
  /** Moves @a path to point to the first child of the current path.
   */
  void down();

  
  /** Returns <tt>true</tt> if @a descendant is a descendant of @a path.
   * 
   * @param descendant Another Gtk::TreePath.
   * @return <tt>true</tt> if @a descendant is contained inside @a path.
   */
  bool is_ancestor(const TreePath& descendant) const;
  
  /** Returns <tt>true</tt> if @a path is a descendant of @a ancestor.
   * 
   * @param ancestor Another Gtk::TreePath.
   * @return <tt>true</tt> if @a ancestor contains @a path somewhere below it.
   */
  bool is_descendant(const TreePath& ancestor) const;

  
  /** Generates a string representation of the path.  This string is a ':'
   * separated list of numbers.  For example, "4:10:0:3" would be an acceptable return value for this string.
   * 
   * @return The string.
   */
  Glib::ustring to_string() const;


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Appends a new index to a path.  As a result, the depth of the path is
   * increased.
   * 
   * @deprecated replaced by push_back()
   * 
   * @param index The index.
   */
  void append_index(int index);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Prepends a new index to a path.  As a result, the depth of the path is
   * increased.
   * 
   * @deprecated replaced by push_front().
   * 
   * @param index The index.
   */
  void prepend_index(int index);
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /** Returns the current depth of @a path.
   * 
   * @deprecated replaced by size().
   * 
   * @return The depth of @a path.
   */
  int get_depth() const;
#endif // GTKMM_DISABLE_DEPRECATED


#ifndef GTKMM_DISABLE_DEPRECATED

  /// @deprecated replaced by begin(), end(), and operator[]
  Glib::ArrayHandle<int> get_indices() const;
#endif // GTKMM_DISABLE_DEPRECATED

  
  /**
   * Obtains a Gtk::TreeModel and Gtk::TreeModel::Path from selection data of target type
   * "GTK_TREE_MODEL_ROW". Normally called from a drag_data_received handler.
   * This function can only be used if @a selection_data originates from the same
   * process that's calling this function, because a pointer to the tree model
   * is being passed around. If you aren't in the same process, then you'll
   * get memory corruption. In the Gtk::TreeDragDest drag_data_received signal handler,
   * you can assume that selection data of type "GTK_TREE_MODEL_ROW" is
   * from the current process.
   *
   * @param selection_data a #SelectionData
   * @param model a Gtk::TreeModel
   * @param path a row in model
   *
   * @return true if the selection_data had target type "GTK_TREE_MODEL_ROW" and
   *  is otherwise valid
   **/
  static bool get_from_selection_data(const SelectionData& selection_data, Glib::RefPtr<TreeModel>& model, TreePath& path);
  //TODO: Add an override that takes a const TreeModel (and deprecate the current version).

  /// See description in the other overload.
  static bool get_from_selection_data(const SelectionData& selection_data, TreePath& path);

  /**
   * Sets selection data of target type "GTK_TREE_MODEL_ROW". Normally used
   * in a drag_data_get signal handler.
   *
   * @param selection_data some #SelectionData
   * @param model: a Gtk::TreeModel
   *
   * @return true if the selection_data had the proper target type to allow us to set a tree row
   **/
  bool set_in_selection_data(SelectionData& selection_data, const Glib::RefPtr<const TreeModel>& model) const;


};

#ifndef DOXYGEN_SHOULD_SKIP_THIS

template <class In>
void TreePath::append(In pbegin, In pend)
{
  // push_back() can't throw -- if it could, this code wouldn't be strongly exception-safe.
  for(; pbegin != pend; ++pbegin)
    this->push_back(*pbegin);
}

template <class In> inline
TreePath::TreePath(In pbegin, In pend)
{
  this->append(pbegin, pend);
}

template <class In> inline
void TreePath::assign(In pbegin, In pend)
{
  TreePath temp (pbegin, pend);
  this->swap(temp);
}


/* Traits for use of TreePath in a Glib::ListHandle<>.
 */
struct TreePath_Traits
{
  typedef TreePath            CppType;
  typedef const GtkTreePath*  CType;
  typedef GtkTreePath*        CTypeNonConst;

  static CType to_c_type(const CppType& item)
    { return item.gobj(); }

  static CType to_c_type(CType item)
    { return item; }

  static CppType to_cpp_type(CType item)
    { return CppType(const_cast<CTypeNonConst>(item)); }

  static void release_c_type(CType item)
    { gtk_tree_path_free(const_cast<CTypeNonConst>(item)); }
};

#endif /* DOXYGEN_SHOULD_SKIP_THIS */


} // namespace Gtk


namespace Gtk
{

/** @relates Gtk::TreePath
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 * @result The result
 */
bool operator==(const TreePath& lhs, const TreePath& rhs);

/** @relates Gtk::TreePath
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 * @result The result
 */
bool operator!=(const TreePath& lhs, const TreePath& rhs);

/** @relates Gtk::TreePath
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 * @result The result
 */
bool operator<(const TreePath& lhs, const TreePath& rhs);

/** @relates Gtk::TreePath
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 * @result The result
 */
bool operator>(const TreePath& lhs, const TreePath& rhs);

/** @relates Gtk::TreePath
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 * @result The result
 */
bool operator<=(const TreePath& lhs, const TreePath& rhs);

/** @relates Gtk::TreePath
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 * @result The result
 */
bool operator>=(const TreePath& lhs, const TreePath& rhs);


} // namespace Gtk


namespace Gtk
{

/** @relates Gtk::TreePath
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 */
inline void swap(TreePath& lhs, TreePath& rhs)
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
 * @relates Gtk::TreePath
 */
Gtk::TreePath wrap(GtkTreePath* object, bool take_copy = false);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
template <>
class Value<Gtk::TreePath> : public Glib::Value_Boxed<Gtk::TreePath>
{};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} // namespace Glib


#endif /* _GTKMM_TREEPATH_H */

