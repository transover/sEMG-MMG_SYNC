/* Generated code for Python module 'GUI_Function$Analyse$SourceConfig'
 * created by Nuitka version 2.6.9
 *
 * This code is in part copyright 2025 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_GUI_Function$Analyse$SourceConfig" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_GUI_Function$Analyse$SourceConfig;
PyDictObject *moduledict_GUI_Function$Analyse$SourceConfig;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[102];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[102];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UN_TRANSLATE("GUI_Function.Analyse.SourceConfig"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 102; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_GUI_Function$Analyse$SourceConfig(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 102; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// Helper to preserving module variables for Python3.11+
#if 2
#if PYTHON_VERSION >= 0x3c0
NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyInterpreterState *interp, PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = interp->dict_state.next_keys_version++;
    dk->dk_version = result;
    return result;
}
#elif PYTHON_VERSION >= 0x3b0
static uint32_t _Nuitka_next_dict_keys_version = 2;

NUITKA_MAY_BE_UNUSED static uint32_t _Nuitka_PyDictKeys_GetVersionForCurrentState(PyDictKeysObject *dk)
{
    if (dk->dk_version != 0) {
        return dk->dk_version;
    }
    uint32_t result = _Nuitka_next_dict_keys_version++;
    dk->dk_version = result;
    return result;
}
#endif
#endif

// Accessors to module variables.
static PyObject *module_var_accessor_GUI_Function$Analyse$SourceConfig_$$_RawData(PyThreadState *tstate) {
#if 1
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_GUI_Function$Analyse$SourceConfig->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_GUI_Function$Analyse$SourceConfig->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)mod_consts[76]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_GUI_Function$Analyse$SourceConfig->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[76])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[76], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[76])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[76], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)mod_consts[76]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)mod_consts[76]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[76]);
    }

    return result;
}

static PyObject *module_var_accessor_GUI_Function$Analyse$SourceConfig_$$___spec__(PyThreadState *tstate) {
#if 0
    PyObject *result;

#if PYTHON_VERSION < 0x3b0
    static uint64_t dict_version = 0;
    static PyObject *cache_value = NULL;

    if (moduledict_GUI_Function$Analyse$SourceConfig->ma_version_tag == dict_version) {
        CHECK_OBJECT_X(cache_value);
        result = cache_value;
    } else {
        dict_version = moduledict_GUI_Function$Analyse$SourceConfig->ma_version_tag;

        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)mod_consts[101]);
        cache_value = result;
    }
#else
    static uint32_t dict_keys_version = 0xFFFFFFFF;
    static Py_ssize_t cache_dk_index = 0;

    PyDictKeysObject *dk = moduledict_GUI_Function$Analyse$SourceConfig->ma_keys;
    if (likely(DK_IS_UNICODE(dk))) {

#if PYTHON_VERSION >= 0x3c0
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(tstate->interp, dk);
#else
        uint32_t current_dk_version = _Nuitka_PyDictKeys_GetVersionForCurrentState(dk);
#endif

        if (current_dk_version != dict_keys_version) {
            dict_keys_version = current_dk_version;
            Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[101])->_base._base.hash;
            assert(hash != -1);

            cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[101], hash);
        }

        if (cache_dk_index >= 0) {
            assert(dk->dk_kind != DICT_KEYS_SPLIT);

            PyDictUnicodeEntry *entries = DK_UNICODE_ENTRIES(dk);

            result = entries[cache_dk_index].me_value;

            if (unlikely(result == NULL)) {
                Py_hash_t hash = ((Nuitka_StringObject *)mod_consts[101])->_base._base.hash;
                assert(hash != -1);

                cache_dk_index = Nuitka_Py_unicodekeys_lookup_unicode(dk, mod_consts[101], hash);

                if (cache_dk_index >= 0) {
                    result = entries[cache_dk_index].me_value;
                }
            }
        } else {
            result = NULL;
        }
    } else {
        result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)mod_consts[101]);
    }
#endif

#else
    PyObject *result = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)mod_consts[101]);
#endif

    if (unlikely(result == NULL)) {
        result = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)mod_consts[101]);
    }

    return result;
}


#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
// The module code objects.
static PyCodeObject *code_objects_37f8d545bbee80555fc5c9a9cb4f0655;
static PyCodeObject *code_objects_8ed5d5526d8ec247e10f6ff9b57f7525;
static PyCodeObject *code_objects_9127ba083159b510114bfec25850d5b7;
static PyCodeObject *code_objects_987e6e7297e6c1d5d2619950c8888186;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[95]); CHECK_OBJECT(module_filename_obj);
    code_objects_37f8d545bbee80555fc5c9a9cb4f0655 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[96], mod_consts[96], NULL, NULL, 0, 0, 0);
    code_objects_8ed5d5526d8ec247e10f6ff9b57f7525 = MAKE_CODE_OBJECT(module_filename_obj, 12, CO_NOFREE, mod_consts[80], mod_consts[80], mod_consts[97], NULL, 0, 0, 0);
    code_objects_9127ba083159b510114bfec25850d5b7 = MAKE_CODE_OBJECT(module_filename_obj, 150, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[34], mod_consts[35], mod_consts[98], mod_consts[99], 0, 0, 0);
    code_objects_987e6e7297e6c1d5d2619950c8888186 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[94], mod_consts[100], NULL, 2, 0, 0);
}
#endif

// The module function declarations.
static PyObject *MAKE_FUNCTION_GUI_Function$Analyse$SourceConfig$$$function__1_set_File(PyThreadState *tstate, PyObject *defaults);


static PyObject *MAKE_FUNCTION_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir(PyThreadState *tstate, struct Nuitka_CellObject **closure);


// The module function definitions.
static PyObject *impl_GUI_Function$Analyse$SourceConfig$$$function__1_set_File(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_cls = Nuitka_Cell_New1(python_pars[0]);
    PyObject *par_DataDir = python_pars[1];
    PyObject *var_os = NULL;
    PyObject *var_tk = NULL;
    struct Nuitka_CellObject *var_messagebox = Nuitka_Cell_NewEmpty();
    PyObject *var_dir_path = NULL;
    PyObject *var_dir_names = NULL;
    struct Nuitka_CellObject *var_root = Nuitka_Cell_NewEmpty();
    PyObject *var_screen_width = NULL;
    PyObject *var_screen_height = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_scrollbar = NULL;
    struct Nuitka_CellObject *var_listbox = Nuitka_Cell_NewEmpty();
    PyObject *var_name = NULL;
    PyObject *var_get_selected_dir = NULL;
    PyObject *var_button = NULL;
    PyObject *outline_0_var_name = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_os == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_os = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File)) {
        Py_XDECREF(cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File = MAKE_FUNCTION_FRAME(tstate, code_objects_987e6e7297e6c1d5d2619950c8888186, module_GUI_Function$Analyse$SourceConfig, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_type_description == NULL);
    frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File = cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File);
    assert(Py_REFCNT(frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_GUI_Function$Analyse$SourceConfig;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = const_int_0;
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 113;
        tmp_assign_source_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 113;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        assert(var_tk == NULL);
        var_tk = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[0];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_GUI_Function$Analyse$SourceConfig;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[1];
        tmp_level_value_2 = const_int_0;
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 114;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 114;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_GUI_Function$Analyse$SourceConfig,
                mod_consts[2],
                const_int_0
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 114;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_messagebox) == NULL);
        Nuitka_Cell_SET(var_messagebox, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(par_DataDir);
        tmp_assign_source_4 = par_DataDir;
        assert(var_dir_path == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_dir_path = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_path_arg_1;
            CHECK_OBJECT(var_dir_path);
            tmp_path_arg_1 = var_dir_path;
            tmp_iter_arg_1 = OS_LISTDIR(tstate, tmp_path_arg_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 120;
                type_description_1 = "cooocoocooooocooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 120;
                type_description_1 = "cooocoocooooocooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_LIST_EMPTY(tstate, 0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_7;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_8 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                    type_description_1 = "cooocoocooooocooo";
                    exception_lineno = 120;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_9 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_name;
                outline_0_var_name = tmp_assign_source_9;
                Py_INCREF(outline_0_var_name);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_isdir_arg_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_capi_result_1;
            int tmp_truth_name_1;
            tmp_expression_value_1 = IMPORT_HARD_NTPATH();
            assert(!(tmp_expression_value_1 == NULL));
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[3]);
            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 120;
                type_description_1 = "cooocoocooooocooo";
                goto try_except_handler_3;
            }
            if (var_dir_path == NULL) {
                Py_DECREF(tmp_called_value_1);
                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[4]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 120;
                type_description_1 = "cooocoocooooocooo";
                goto try_except_handler_3;
            }

            tmp_args_element_value_1 = var_dir_path;
            CHECK_OBJECT(outline_0_var_name);
            tmp_args_element_value_2 = outline_0_var_name;
            frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 120;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
                tmp_isdir_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
            }

            Py_DECREF(tmp_called_value_1);
            if (tmp_isdir_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 120;
                type_description_1 = "cooocoocooooocooo";
                goto try_except_handler_3;
            }
            tmp_capi_result_1 = OS_PATH_FILE_ISDIR(tstate, tmp_isdir_arg_1);
            Py_DECREF(tmp_isdir_arg_1);
            if (tmp_capi_result_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 120;
                type_description_1 = "cooocoocooooocooo";
                goto try_except_handler_3;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
            if (tmp_truth_name_1 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                Py_DECREF(tmp_capi_result_1);

                exception_lineno = 120;
                type_description_1 = "cooocoocooooocooo";
                goto try_except_handler_3;
            }
            tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_capi_result_1);
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_name);
            tmp_append_value_1 = outline_0_var_name;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 120;
                type_description_1 = "cooocoocooooocooo";
                goto try_except_handler_3;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 120;
            type_description_1 = "cooocoocooooocooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_5 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_5);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_name);
        outline_0_var_name = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_XDECREF(outline_0_var_name);
        outline_0_var_name = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 120;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_dir_names == NULL);
        var_dir_names = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_tk);
        tmp_called_instance_1 = var_tk;
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 124;
        tmp_assign_source_10 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[5]);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 124;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_root) == NULL);
        Nuitka_Cell_SET(var_root, tmp_assign_source_10);

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_root));
        tmp_called_instance_2 = Nuitka_Cell_GET(var_root);
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 127;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_2,
            mod_consts[6],
            PyTuple_GET_ITEM(mod_consts[7], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 127;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(Nuitka_Cell_GET(var_root));
        tmp_expression_value_2 = Nuitka_Cell_GET(var_root);
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[8]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 128;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 128;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POS_ARGS1(tstate, tmp_called_value_2, mod_consts[9]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 128;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(Nuitka_Cell_GET(var_root));
        tmp_called_instance_3 = Nuitka_Cell_GET(var_root);
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 131;
        tmp_assign_source_11 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[10]);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 131;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        assert(var_screen_width == NULL);
        var_screen_width = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(Nuitka_Cell_GET(var_root));
        tmp_called_instance_4 = Nuitka_Cell_GET(var_root);
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 132;
        tmp_assign_source_12 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[11]);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 132;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        assert(var_screen_height == NULL);
        var_screen_height = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(var_screen_width);
        tmp_sub_expr_left_1 = var_screen_width;
        tmp_sub_expr_right_1 = mod_consts[12];
        tmp_truediv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 133;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[13];
        tmp_assign_source_13 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 133;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(var_screen_height);
        tmp_sub_expr_left_2 = var_screen_height;
        tmp_sub_expr_right_2 = mod_consts[14];
        tmp_truediv_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 134;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_2 = mod_consts[13];
        tmp_assign_source_14 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 134;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        assert(var_y == NULL);
        var_y = tmp_assign_source_14;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(Nuitka_Cell_GET(var_root));
        tmp_expression_value_3 = Nuitka_Cell_GET(var_root);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[6]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[15];
        CHECK_OBJECT(var_x);
        tmp_tuple_element_1 = var_x;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(tstate, 2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_y);
        tmp_tuple_element_1 = var_y;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        tmp_args_element_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 135;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 135;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 135;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_tk);
        tmp_called_instance_5 = var_tk;
        CHECK_OBJECT(Nuitka_Cell_GET(var_root));
        tmp_args_element_value_4 = Nuitka_Cell_GET(var_root);
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 137;
        tmp_assign_source_15 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[16], tmp_args_element_value_4);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 137;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        assert(var_scrollbar == NULL);
        var_scrollbar = tmp_assign_source_15;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_scrollbar);
        tmp_expression_value_4 = var_scrollbar;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[17]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 138;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tk);
        tmp_expression_value_5 = var_tk;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[18]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 138;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tk);
        tmp_expression_value_6 = var_tk;
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[19]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 138;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 138;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_call_result_4 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[20]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 138;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_tk);
        tmp_expression_value_7 = var_tk;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[21]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 140;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_root));
        tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(var_root);
        tmp_kw_call_dict_value_0_1 = mod_consts[22];
        tmp_kw_call_dict_value_1_1 = mod_consts[23];
        CHECK_OBJECT(var_scrollbar);
        tmp_expression_value_8 = var_scrollbar;
        tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[24]);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 140;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 140;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_5, args, kw_values, mod_consts[25]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 140;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_listbox) == NULL);
        Nuitka_Cell_SET(var_listbox, tmp_assign_source_16);

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_dir_names);
        tmp_iter_arg_2 = var_dir_names;
        tmp_assign_source_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 141;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_17;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_18 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
                type_description_1 = "cooocoocooooocooo";
                exception_lineno = 141;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_19 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_name;
            var_name = tmp_assign_source_19;
            Py_INCREF(var_name);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        if (Nuitka_Cell_GET(var_listbox) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 142;
            type_description_1 = "cooocoocooooocooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(var_listbox);
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[27]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 142;
            type_description_1 = "cooocoocooooocooo";
            goto try_except_handler_4;
        }
        if (var_tk == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[28]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 142;
            type_description_1 = "cooocoocooooocooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_10 = var_tk;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[29]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 142;
            type_description_1 = "cooocoocooooocooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[30];
        CHECK_OBJECT(var_name);
        tmp_kw_call_arg_value_1_1 = var_name;
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_1};
            tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 142;
            type_description_1 = "cooocoocooooocooo";
            goto try_except_handler_4;
        }
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 142;
            type_description_1 = "cooocoocooooocooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


        exception_lineno = 141;
        type_description_1 = "cooocoocooooocooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_6;
        if (Nuitka_Cell_GET(var_listbox) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 143;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = Nuitka_Cell_GET(var_listbox);
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 143;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[17]);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 143;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(var_scrollbar);
        tmp_expression_value_11 = var_scrollbar;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[31]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 147;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(var_listbox) == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 147;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_12 = Nuitka_Cell_GET(var_listbox);
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[32]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 147;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 147;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

            tmp_call_result_7 = CALL_FUNCTION_WITH_NO_ARGS_KW_SPLIT(tstate, tmp_called_value_7, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 147;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_20;
        struct Nuitka_CellObject *tmp_closure_1[4];

        tmp_closure_1[0] = par_cls;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_listbox;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = var_messagebox;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = var_root;
        Py_INCREF(tmp_closure_1[3]);

        tmp_assign_source_20 = MAKE_FUNCTION_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir(tstate, tmp_closure_1);

        assert(var_get_selected_dir == NULL);
        var_get_selected_dir = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        if (var_tk == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(tstate, &exception_state, mod_consts[28]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 169;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = var_tk;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[36]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 169;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_root));
        tmp_kw_call_arg_value_0_3 = Nuitka_Cell_GET(var_root);
        tmp_kw_call_dict_value_0_2 = mod_consts[37];
        CHECK_OBJECT(var_get_selected_dir);
        tmp_kw_call_dict_value_1_2 = var_get_selected_dir;
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 169;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1_KW_SPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts[38]);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 169;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        assert(var_button == NULL);
        var_button = tmp_assign_source_21;
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(var_button);
        tmp_called_instance_7 = var_button;
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 170;
        tmp_call_result_8 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_7, mod_consts[17]);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 170;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(Nuitka_Cell_GET(var_root));
        tmp_called_instance_8 = Nuitka_Cell_GET(var_root);
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame.f_lineno = 173;
        tmp_call_result_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[39]);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 173;
            type_description_1 = "cooocoocooooocooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File,
        type_description_1,
        par_cls,
        par_DataDir,
        var_os,
        var_tk,
        var_messagebox,
        var_dir_path,
        var_dir_names,
        var_root,
        var_screen_width,
        var_screen_height,
        var_x,
        var_y,
        var_scrollbar,
        var_listbox,
        var_name,
        var_get_selected_dir,
        var_button
    );


    // Release cached frame if used for exception.
    if (frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File == cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File);
        cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File = NULL;
    }

    assertFrameObject(frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_os);
    Py_DECREF(var_os);
    var_os = NULL;
    Py_XDECREF(var_tk);
    var_tk = NULL;
    CHECK_OBJECT(var_messagebox);
    Py_DECREF(var_messagebox);
    var_messagebox = NULL;
    Py_XDECREF(var_dir_path);
    var_dir_path = NULL;
    CHECK_OBJECT(var_dir_names);
    Py_DECREF(var_dir_names);
    var_dir_names = NULL;
    CHECK_OBJECT(var_root);
    Py_DECREF(var_root);
    var_root = NULL;
    CHECK_OBJECT(var_screen_width);
    Py_DECREF(var_screen_width);
    var_screen_width = NULL;
    CHECK_OBJECT(var_screen_height);
    Py_DECREF(var_screen_height);
    var_screen_height = NULL;
    CHECK_OBJECT(var_x);
    Py_DECREF(var_x);
    var_x = NULL;
    CHECK_OBJECT(var_y);
    Py_DECREF(var_y);
    var_y = NULL;
    CHECK_OBJECT(var_scrollbar);
    Py_DECREF(var_scrollbar);
    var_scrollbar = NULL;
    CHECK_OBJECT(var_listbox);
    Py_DECREF(var_listbox);
    var_listbox = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    CHECK_OBJECT(var_get_selected_dir);
    Py_DECREF(var_get_selected_dir);
    var_get_selected_dir = NULL;
    CHECK_OBJECT(var_button);
    Py_DECREF(var_button);
    var_button = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_4 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_4 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(var_os);
    Py_DECREF(var_os);
    var_os = NULL;
    Py_XDECREF(var_tk);
    var_tk = NULL;
    CHECK_OBJECT(var_messagebox);
    Py_DECREF(var_messagebox);
    var_messagebox = NULL;
    Py_XDECREF(var_dir_path);
    var_dir_path = NULL;
    Py_XDECREF(var_dir_names);
    var_dir_names = NULL;
    CHECK_OBJECT(var_root);
    Py_DECREF(var_root);
    var_root = NULL;
    Py_XDECREF(var_screen_width);
    var_screen_width = NULL;
    Py_XDECREF(var_screen_height);
    var_screen_height = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_scrollbar);
    var_scrollbar = NULL;
    CHECK_OBJECT(var_listbox);
    Py_DECREF(var_listbox);
    var_listbox = NULL;
    Py_XDECREF(var_name);
    var_name = NULL;
    Py_XDECREF(var_get_selected_dir);
    var_get_selected_dir = NULL;
    Py_XDECREF(var_button);
    var_button = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_DataDir);
    Py_DECREF(par_DataDir);
    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_DataDir);
    Py_DECREF(par_DataDir);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_selected_index = NULL;
    PyObject *var_selected_dir = NULL;
    struct Nuitka_FrameObject *frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir)) {
        Py_XDECREF(cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir);

#if _DEBUG_REFCOUNTS
        if (cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir = MAKE_FUNCTION_FRAME(tstate, code_objects_9127ba083159b510114bfec25850d5b7, module_GUI_Function$Analyse$SourceConfig, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir->m_type_description == NULL);
    frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir = cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir);
    assert(Py_REFCNT(frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 151;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir->m_frame.f_lineno = 151;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[41]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 151;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        assert(var_selected_index == NULL);
        var_selected_index = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_selected_index);
        tmp_len_arg_1 = var_selected_index;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 152;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[2]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 153;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[2]);
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir->m_frame.f_lineno = 153;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_2,
            mod_consts[42],
            &PyTuple_GET_ITEM(mod_consts[43], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 153;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[26]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 155;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[44]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 155;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_selected_index);
        tmp_expression_value_2 = var_selected_index;
        tmp_subscript_value_1 = const_int_0;
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 155;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir->m_frame.f_lineno = 155;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 155;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        assert(var_selected_dir == NULL);
        var_selected_dir = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[45]);
        assert(tmp_called_value_2 != NULL);
        tmp_args_element_value_2 = mod_consts[46];
        CHECK_OBJECT(var_selected_dir);
        tmp_args_element_value_3 = var_selected_dir;
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 156;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_selected_dir);
        tmp_assattr_value_1 = var_selected_dir;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[47]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 157;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[48], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 157;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_2;
        tmp_kw_call_arg_value_0_1 = mod_consts[49];
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[47]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 158;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[48]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 158;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir->m_frame.f_lineno = 158;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 158;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[47]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 158;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[50], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 158;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(tstate, 0);
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[47]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 159;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[51], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 159;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_format_spec_1;
        PyObject *tmp_assattr_target_4;
        tmp_dict_key_1 = mod_consts[52];
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[47]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 161;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[50]);
        if (tmp_format_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 161;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[53];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 161;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[54];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[47]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 161;
                type_description_1 = "oocccc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_5 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[48]);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 161;
                type_description_1 = "oocccc";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[53];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 161;
                type_description_1 = "oocccc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[55];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_dict_value_1 = PyUnicode_Join(mod_consts[53], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 161;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_string_concat_values_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_string_concat_values_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_format_value_5;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_format_spec_5;
            PyObject *tmp_string_concat_values_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_format_value_7;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_format_spec_7;
            PyObject *tmp_string_concat_values_5;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_format_value_9;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_format_spec_9;
            tmp_res = PyDict_SetItem(tmp_assattr_value_4, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[56];
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[47]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 162;
                type_description_1 = "oocccc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_6 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[50]);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 162;
                type_description_1 = "oocccc";
                goto dict_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[53];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 162;
                type_description_1 = "oocccc";
                goto dict_build_exception_1;
            }
            tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 4);
            {
                PyObject *tmp_format_value_4;
                PyObject *tmp_expression_value_7;
                PyObject *tmp_format_spec_4;
                PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
                tmp_tuple_element_2 = mod_consts[57];
                PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
                if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[47]);
                    NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                    CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                    exception_lineno = 162;
                    type_description_1 = "oocccc";
                    goto tuple_build_exception_2;
                }

                tmp_expression_value_7 = Nuitka_Cell_GET(self->m_closure[0]);
                tmp_format_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[48]);
                if (tmp_format_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 162;
                    type_description_1 = "oocccc";
                    goto tuple_build_exception_2;
                }
                tmp_format_spec_4 = mod_consts[53];
                tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
                Py_DECREF(tmp_format_value_4);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 162;
                    type_description_1 = "oocccc";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
                tmp_tuple_element_2 = mod_consts[58];
                PyTuple_SET_ITEM0(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_string_concat_values_2);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dict_value_1 = PyUnicode_Join(mod_consts[53], tmp_string_concat_values_2);
            Py_DECREF(tmp_string_concat_values_2);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 162;
                type_description_1 = "oocccc";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assattr_value_4, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[59];
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[47]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 163;
                type_description_1 = "oocccc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_8 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_format_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[50]);
            if (tmp_format_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 163;
                type_description_1 = "oocccc";
                goto dict_build_exception_1;
            }
            tmp_format_spec_5 = mod_consts[53];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 163;
                type_description_1 = "oocccc";
                goto dict_build_exception_1;
            }
            tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
            {
                PyObject *tmp_format_value_6;
                PyObject *tmp_expression_value_9;
                PyObject *tmp_format_spec_6;
                PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
                tmp_tuple_element_3 = mod_consts[60];
                PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
                if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[47]);
                    NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                    CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                    exception_lineno = 163;
                    type_description_1 = "oocccc";
                    goto tuple_build_exception_3;
                }

                tmp_expression_value_9 = Nuitka_Cell_GET(self->m_closure[0]);
                tmp_format_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[48]);
                if (tmp_format_value_6 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 163;
                    type_description_1 = "oocccc";
                    goto tuple_build_exception_3;
                }
                tmp_format_spec_6 = mod_consts[53];
                tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
                Py_DECREF(tmp_format_value_6);
                if (tmp_tuple_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 163;
                    type_description_1 = "oocccc";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
                tmp_tuple_element_3 = mod_consts[55];
                PyTuple_SET_ITEM0(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_string_concat_values_3);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dict_value_1 = PyUnicode_Join(mod_consts[53], tmp_string_concat_values_3);
            Py_DECREF(tmp_string_concat_values_3);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 163;
                type_description_1 = "oocccc";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assattr_value_4, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[61];
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[47]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 164;
                type_description_1 = "oocccc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_10 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_format_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[50]);
            if (tmp_format_value_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 164;
                type_description_1 = "oocccc";
                goto dict_build_exception_1;
            }
            tmp_format_spec_7 = mod_consts[53];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
            Py_DECREF(tmp_format_value_7);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 164;
                type_description_1 = "oocccc";
                goto dict_build_exception_1;
            }
            tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 4);
            {
                PyObject *tmp_format_value_8;
                PyObject *tmp_expression_value_11;
                PyObject *tmp_format_spec_8;
                PyTuple_SET_ITEM(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
                tmp_tuple_element_4 = mod_consts[62];
                PyTuple_SET_ITEM0(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
                if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[47]);
                    NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                    CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                    exception_lineno = 164;
                    type_description_1 = "oocccc";
                    goto tuple_build_exception_4;
                }

                tmp_expression_value_11 = Nuitka_Cell_GET(self->m_closure[0]);
                tmp_format_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[48]);
                if (tmp_format_value_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 164;
                    type_description_1 = "oocccc";
                    goto tuple_build_exception_4;
                }
                tmp_format_spec_8 = mod_consts[53];
                tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
                Py_DECREF(tmp_format_value_8);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 164;
                    type_description_1 = "oocccc";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
                tmp_tuple_element_4 = mod_consts[58];
                PyTuple_SET_ITEM0(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_string_concat_values_4);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_dict_value_1 = PyUnicode_Join(mod_consts[53], tmp_string_concat_values_4);
            Py_DECREF(tmp_string_concat_values_4);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 164;
                type_description_1 = "oocccc";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assattr_value_4, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[63];
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[47]);
                NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                exception_lineno = 165;
                type_description_1 = "oocccc";
                goto dict_build_exception_1;
            }

            tmp_expression_value_12 = Nuitka_Cell_GET(self->m_closure[0]);
            tmp_format_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[50]);
            if (tmp_format_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 165;
                type_description_1 = "oocccc";
                goto dict_build_exception_1;
            }
            tmp_format_spec_9 = mod_consts[53];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
            Py_DECREF(tmp_format_value_9);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 165;
                type_description_1 = "oocccc";
                goto dict_build_exception_1;
            }
            tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 4);
            {
                PyObject *tmp_format_value_10;
                PyObject *tmp_expression_value_13;
                PyObject *tmp_format_spec_10;
                PyTuple_SET_ITEM(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
                tmp_tuple_element_5 = mod_consts[64];
                PyTuple_SET_ITEM0(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
                if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[47]);
                    NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
                    CHAIN_EXCEPTION(tstate, exception_state.exception_value);

                    exception_lineno = 165;
                    type_description_1 = "oocccc";
                    goto tuple_build_exception_5;
                }

                tmp_expression_value_13 = Nuitka_Cell_GET(self->m_closure[0]);
                tmp_format_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[48]);
                if (tmp_format_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 165;
                    type_description_1 = "oocccc";
                    goto tuple_build_exception_5;
                }
                tmp_format_spec_10 = mod_consts[53];
                tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_10, tmp_format_spec_10);
                Py_DECREF(tmp_format_value_10);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 165;
                    type_description_1 = "oocccc";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
                tmp_tuple_element_5 = mod_consts[58];
                PyTuple_SET_ITEM0(tmp_string_concat_values_5, 3, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_string_concat_values_5);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_dict_value_1 = PyUnicode_Join(mod_consts[53], tmp_string_concat_values_5);
            Py_DECREF(tmp_string_concat_values_5);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 165;
                type_description_1 = "oocccc";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assattr_value_4, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assattr_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_assattr_value_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[47]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 160;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[65], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 160;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(tstate, &exception_state, mod_consts[66]);
            NORMALIZE_EXCEPTION_STATE(tstate, &exception_state);
            CHAIN_EXCEPTION(tstate, exception_state.exception_value);

            exception_lineno = 167;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(self->m_closure[3]);
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir->m_frame.f_lineno = 167;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[67]);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 167;
            type_description_1 = "oocccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir,
        type_description_1,
        var_selected_index,
        var_selected_dir,
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[0],
        self->m_closure[3]
    );


    // Release cached frame if used for exception.
    if (frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir == cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir);
        cache_frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir = NULL;
    }

    assertFrameObject(frame_frame_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_selected_index);
    Py_DECREF(var_selected_index);
    var_selected_index = NULL;
    Py_XDECREF(var_selected_dir);
    var_selected_dir = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_1 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_1 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    Py_XDECREF(var_selected_index);
    var_selected_index = NULL;
    Py_XDECREF(var_selected_dir);
    var_selected_dir = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    CHECK_EXCEPTION_STATE(&exception_state);
    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_GUI_Function$Analyse$SourceConfig$$$function__1_set_File(PyThreadState *tstate, PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_GUI_Function$Analyse$SourceConfig$$$function__1_set_File,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        mod_consts[94],
#endif
        code_objects_987e6e7297e6c1d5d2619950c8888186,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_GUI_Function$Analyse$SourceConfig,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir(PyThreadState *tstate, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        mod_consts[35],
#endif
        code_objects_9127ba083159b510114bfec25850d5b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_GUI_Function$Analyse$SourceConfig,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_GUI_Function$Analyse$SourceConfig[] = {
    impl_GUI_Function$Analyse$SourceConfig$$$function__1_set_File$$$function__1_get_selected_dir,
    impl_GUI_Function$Analyse$SourceConfig$$$function__1_set_File,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    PyThreadState *tstate = PyThreadState_GET();

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_GUI_Function$Analyse$SourceConfig);

    if (unlikely(offset == -1)) {
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = Nuitka_Function_ExtractCodeObjectDescription(tstate, function);

    PyObject *result = MAKE_TUPLE_EMPTY(tstate, 8);
    PyTuple_SET_ITEM(result, 0, Nuitka_PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM_IMMORTAL(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM_IMMORTAL(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM_IMMORTAL(result, 6, Py_None);
#endif

    PyObject *closure = PyObject_GetAttr(
        (PyObject *)function,
        const_str_plain___closure__
    );

    if (closure != Py_None) {
        for (Py_ssize_t i=0; i < PyTuple_GET_SIZE(closure); i++) {
            struct Nuitka_CellObject *cell = (struct Nuitka_CellObject *)PyTuple_GET_ITEM(closure, i);

            assert(Nuitka_Cell_Check((PyObject *)cell));

            PyTuple_SET_ITEM0(
                closure,
                i,
                cell->ob_ref
            );
        }
    }

    PyTuple_SET_ITEM(result, 7, closure);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;
    PyObject *closure;

    if (!PyArg_ParseTuple(args, "OOOOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, &closure, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_GUI_Function$Analyse$SourceConfig,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        closure,
        function_table_GUI_Function$Analyse$SourceConfig,
        sizeof(function_table_GUI_Function$Analyse$SourceConfig) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Actual name might be different when loaded as a package.
#if defined(_NUITKA_MODULE) && 0
static char const *module_full_name = "GUI_Function.Analyse.SourceConfig";
#endif

// Internal entry point for module code.
PyObject *modulecode_GUI_Function$Analyse$SourceConfig(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("GUI_Function$Analyse$SourceConfig");

    // Store the module for future use.
    module_GUI_Function$Analyse$SourceConfig = module;

    moduledict_GUI_Function$Analyse$SourceConfig = MODULE_DICT(module_GUI_Function$Analyse$SourceConfig);

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.
#if PYTHON_VERSION > 0x350 && !defined(_NUITKA_EXPERIMENTAL_DISABLE_ALLOCATORS)
        initNuitkaAllocators();
#endif
        // Initialize the constant values used.
        _initBuiltinModule();

#if PYTHON_VERSION >= 0x3c0
        PyObject *real_module_name = PyObject_GetAttrString(module, "__name__");
        CHECK_OBJECT(real_module_name);
        module_full_name = strdup(Nuitka_String_AsString(real_module_name));
#endif

#if PYTHON_VERSION >= 0x3c0
        createGlobalConstants(tstate, real_module_name);
#else
        createGlobalConstants(tstate);
#endif
        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("GUI_Function$Analyse$SourceConfig: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);
#if 0 >= 0
#ifdef _NUITKA_TRACE
        PRINT_STRING("GUI_Function$Analyse$SourceConfig: Calling updateMetaPathBasedLoaderModuleRoot().\n");
#endif
        updateMetaPathBasedLoaderModuleRoot(module_full_name);
#endif


#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("GUI_Function$Analyse$SourceConfig: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

#if !defined(_NUITKA_EXPERIMENTAL_NEW_CODE_OBJECTS)
        createModuleCodeObjects();
#endif
        init_done = true;
    }

#if defined(_NUITKA_MODULE) && 0
    PyObject *pre_load = IMPORT_EMBEDDED_MODULE(tstate, "GUI_Function.Analyse.SourceConfig" "-preLoad");
    if (pre_load == NULL) {
        return NULL;
    }
#endif

    // PRINT_STRING("in initGUI_Function$Analyse$SourceConfig\n");

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        char const *module_name_c;
        if (loader_entry != NULL) {
            module_name_c = loader_entry->name;
        } else {
            PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)const_str_plain___name__);
            module_name_c = Nuitka_String_AsString(module_name);
        }

        registerDillPluginTables(tstate, module_name_c, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_GUI_Function$Analyse$SourceConfig,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_GUI_Function$Analyse$SourceConfig,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[53]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_GUI_Function$Analyse$SourceConfig,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_GUI_Function$Analyse$SourceConfig,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_GUI_Function$Analyse$SourceConfig,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_GUI_Function$Analyse$SourceConfig);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    PyObject *module_loader = Nuitka_Loader_New(loader_entry);
    UPDATE_STRING_DICT0(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)const_str_plain___loader__, module_loader);

#if PYTHON_VERSION >= 0x300
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_GUI_Function$Analyse$SourceConfig);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

        // Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

#if defined(_NUITKA_MODULE) && 0 && 0 >= 0
        // Set our loader object in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain_loader, module_loader);
#endif

        UPDATE_STRING_DICT1(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_frame_GUI_Function$Analyse$SourceConfig;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    struct Nuitka_ExceptionPreservationItem exception_state = Empty_Nuitka_ExceptionPreservationItem;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_frame_GUI_Function$Analyse$SourceConfig$$$class__1_Source_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    int tmp_res;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_ExceptionPreservationItem exception_keeper_name_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Module init code if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_2);
    }
    frame_frame_GUI_Function$Analyse$SourceConfig = MAKE_MODULE_FRAME(code_objects_37f8d545bbee80555fc5c9a9cb4f0655, module_GUI_Function$Analyse$SourceConfig);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_frame_GUI_Function$Analyse$SourceConfig);
    assert(Py_REFCNT(frame_frame_GUI_Function$Analyse$SourceConfig) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = module_var_accessor_GUI_Function$Analyse$SourceConfig_$$___spec__(tstate);
        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[71], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = module_var_accessor_GUI_Function$Analyse$SourceConfig_$$___spec__(tstate);
        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[72], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[74];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_GUI_Function$Analyse$SourceConfig;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[75];
        tmp_level_value_1 = const_int_0;
        frame_frame_GUI_Function$Analyse$SourceConfig->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_GUI_Function$Analyse$SourceConfig,
                mod_consts[76],
                const_int_0
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[76]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_DICT_EMPTY(tstate);
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[77];
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[78], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[79];
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[69], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[80];
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[81], tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = mod_consts[82];
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[48], tmp_dictset_value);
        assert(!(tmp_result == false));
        // Tried code:
        // Tried code:
        frame_frame_GUI_Function$Analyse$SourceConfig$$$class__1_Source_2 = MAKE_CLASS_FRAME(tstate, code_objects_8ed5d5526d8ec247e10f6ff9b57f7525, module_GUI_Function$Analyse$SourceConfig, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_frame_GUI_Function$Analyse$SourceConfig$$$class__1_Source_2);
        assert(Py_REFCNT(frame_frame_GUI_Function$Analyse$SourceConfig$$$class__1_Source_2) == 2);

        // Framed code:
        {
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_kw_call_arg_value_1_1;
            tmp_kw_call_arg_value_0_1 = mod_consts[49];
            tmp_kw_call_arg_value_1_1 = DICT_GET_ITEM0(tstate, locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[48]);

            if (unlikely(tmp_kw_call_arg_value_1_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[48]);

                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_kw_call_arg_value_1_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_frame_GUI_Function$Analyse$SourceConfig$$$class__1_Source_2->m_frame.f_lineno = 24;
            {
                PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2(tstate, unicode_builtin_format, call_args);
            }

            if (tmp_dictset_value == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[50], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_LIST_EMPTY(tstate, 0);
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[51], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_string_concat_values_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            tmp_dict_key_1 = mod_consts[52];
            tmp_format_value_1 = DICT_GET_ITEM0(tstate, locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[50]);

            if (unlikely(tmp_format_value_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

            RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[50]);

                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_format_spec_1 = mod_consts[53];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(tstate, 4);
            {
                PyObject *tmp_format_value_2;
                PyObject *tmp_format_spec_2;
                PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
                tmp_tuple_element_1 = mod_consts[54];
                PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
                tmp_format_value_2 = DICT_GET_ITEM0(tstate, locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[48]);

                if (unlikely(tmp_format_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[48]);

                    exception_lineno = 27;
                    type_description_2 = "o";
                    goto tuple_build_exception_1;
                }

                if (tmp_format_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 27;
                    type_description_2 = "o";
                    goto tuple_build_exception_1;
                }
                tmp_format_spec_2 = mod_consts[53];
                tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
                if (tmp_tuple_element_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 27;
                    type_description_2 = "o";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
                tmp_tuple_element_1 = mod_consts[55];
                PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_string_concat_values_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_dict_value_1 = PyUnicode_Join(mod_consts[53], tmp_string_concat_values_1);
            Py_DECREF(tmp_string_concat_values_1);
            if (tmp_dict_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 27;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_string_concat_values_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_format_value_3;
                PyObject *tmp_format_spec_3;
                PyObject *tmp_string_concat_values_3;
                PyObject *tmp_tuple_element_3;
                PyObject *tmp_format_value_5;
                PyObject *tmp_format_spec_5;
                PyObject *tmp_string_concat_values_4;
                PyObject *tmp_tuple_element_4;
                PyObject *tmp_format_value_7;
                PyObject *tmp_format_spec_7;
                PyObject *tmp_string_concat_values_5;
                PyObject *tmp_tuple_element_5;
                PyObject *tmp_format_value_9;
                PyObject *tmp_format_spec_9;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[56];
                tmp_format_value_3 = DICT_GET_ITEM0(tstate, locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[50]);

                if (unlikely(tmp_format_value_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[50]);

                    exception_lineno = 28;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }

                if (tmp_format_value_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 28;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_format_spec_3 = mod_consts[53];
                tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
                if (tmp_tuple_element_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 28;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(tstate, 4);
                {
                    PyObject *tmp_format_value_4;
                    PyObject *tmp_format_spec_4;
                    PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
                    tmp_tuple_element_2 = mod_consts[57];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
                    tmp_format_value_4 = DICT_GET_ITEM0(tstate, locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[48]);

                    if (unlikely(tmp_format_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[48]);

                        exception_lineno = 28;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }

                    if (tmp_format_value_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                        exception_lineno = 28;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }
                    tmp_format_spec_4 = mod_consts[53];
                    tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
                    if (tmp_tuple_element_2 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                        exception_lineno = 28;
                        type_description_2 = "o";
                        goto tuple_build_exception_2;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
                    tmp_tuple_element_2 = mod_consts[58];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
                }
                goto tuple_build_noexception_2;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_2:;
                Py_DECREF(tmp_string_concat_values_2);
                goto dict_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_2:;
                tmp_dict_value_1 = PyUnicode_Join(mod_consts[53], tmp_string_concat_values_2);
                Py_DECREF(tmp_string_concat_values_2);
                if (tmp_dict_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 28;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[59];
                tmp_format_value_5 = DICT_GET_ITEM0(tstate, locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[50]);

                if (unlikely(tmp_format_value_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[50]);

                    exception_lineno = 29;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }

                if (tmp_format_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 29;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_format_spec_5 = mod_consts[53];
                tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
                if (tmp_tuple_element_3 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 29;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(tstate, 4);
                {
                    PyObject *tmp_format_value_6;
                    PyObject *tmp_format_spec_6;
                    PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
                    tmp_tuple_element_3 = mod_consts[60];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
                    tmp_format_value_6 = DICT_GET_ITEM0(tstate, locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[48]);

                    if (unlikely(tmp_format_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[48]);

                        exception_lineno = 29;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }

                    if (tmp_format_value_6 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                        exception_lineno = 29;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    tmp_format_spec_6 = mod_consts[53];
                    tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
                    if (tmp_tuple_element_3 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                        exception_lineno = 29;
                        type_description_2 = "o";
                        goto tuple_build_exception_3;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
                    tmp_tuple_element_3 = mod_consts[55];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
                }
                goto tuple_build_noexception_3;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_3:;
                Py_DECREF(tmp_string_concat_values_3);
                goto dict_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_3:;
                tmp_dict_value_1 = PyUnicode_Join(mod_consts[53], tmp_string_concat_values_3);
                Py_DECREF(tmp_string_concat_values_3);
                if (tmp_dict_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 29;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[61];
                tmp_format_value_7 = DICT_GET_ITEM0(tstate, locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[50]);

                if (unlikely(tmp_format_value_7 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[50]);

                    exception_lineno = 30;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }

                if (tmp_format_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 30;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_format_spec_7 = mod_consts[53];
                tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
                if (tmp_tuple_element_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 30;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(tstate, 4);
                {
                    PyObject *tmp_format_value_8;
                    PyObject *tmp_format_spec_8;
                    PyTuple_SET_ITEM(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
                    tmp_tuple_element_4 = mod_consts[62];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
                    tmp_format_value_8 = DICT_GET_ITEM0(tstate, locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[48]);

                    if (unlikely(tmp_format_value_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[48]);

                        exception_lineno = 30;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }

                    if (tmp_format_value_8 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                        exception_lineno = 30;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    tmp_format_spec_8 = mod_consts[53];
                    tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
                    if (tmp_tuple_element_4 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                        exception_lineno = 30;
                        type_description_2 = "o";
                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
                    tmp_tuple_element_4 = mod_consts[58];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_string_concat_values_4);
                goto dict_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                tmp_dict_value_1 = PyUnicode_Join(mod_consts[53], tmp_string_concat_values_4);
                Py_DECREF(tmp_string_concat_values_4);
                if (tmp_dict_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 30;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[63];
                tmp_format_value_9 = DICT_GET_ITEM0(tstate, locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[50]);

                if (unlikely(tmp_format_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[50]);

                    exception_lineno = 31;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }

                if (tmp_format_value_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 31;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_format_spec_9 = mod_consts[53];
                tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 31;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(tstate, 4);
                {
                    PyObject *tmp_format_value_10;
                    PyObject *tmp_format_spec_10;
                    PyTuple_SET_ITEM(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
                    tmp_tuple_element_5 = mod_consts[64];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
                    tmp_format_value_10 = DICT_GET_ITEM0(tstate, locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[48]);

                    if (unlikely(tmp_format_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate))) {

                    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[48]);

                        exception_lineno = 31;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }

                    if (tmp_format_value_10 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                        exception_lineno = 31;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    tmp_format_spec_10 = mod_consts[53];
                    tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_10, tmp_format_spec_10);
                    if (tmp_tuple_element_5 == NULL) {
                        assert(HAS_ERROR_OCCURRED(tstate));

                        FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                        exception_lineno = 31;
                        type_description_2 = "o";
                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
                    tmp_tuple_element_5 = mod_consts[58];
                    PyTuple_SET_ITEM0(tmp_string_concat_values_5, 3, tmp_tuple_element_5);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_string_concat_values_5);
                goto dict_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                tmp_dict_value_1 = PyUnicode_Join(mod_consts[53], tmp_string_concat_values_5);
                Py_DECREF(tmp_string_concat_values_5);
                if (tmp_dict_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 31;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;
            tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 26;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_LIST3(tstate, mod_consts[56],mod_consts[61],mod_consts[63]);
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[83], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = MAKE_LIST2(tstate, mod_consts[52],mod_consts[59]);
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[84], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = DICT_COPY(tstate, mod_consts[85]);
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[86], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));
        {
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_called_value_1;
            tmp_dict_key_2 = mod_consts[52];
            tmp_called_value_1 = module_var_accessor_GUI_Function$Analyse$SourceConfig_$$_RawData(tstate);
            if (unlikely(tmp_called_value_1 == NULL)) {
                RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[76]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(HAS_EXCEPTION_STATE(&exception_state));



                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_frame_GUI_Function$Analyse$SourceConfig$$$class__1_Source_2->m_frame.f_lineno = 43;
            tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
            if (tmp_dict_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 43;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = _PyDict_NewPresized( 5 );
            {
                PyObject *tmp_called_value_2;
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[56];
                tmp_dict_value_2 = MAKE_DICT_EMPTY(tstate);
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[59];
                tmp_called_value_2 = module_var_accessor_GUI_Function$Analyse$SourceConfig_$$_RawData(tstate);
                if (unlikely(tmp_called_value_2 == NULL)) {
                    RAISE_CURRENT_EXCEPTION_NAME_ERROR(tstate, &exception_state, mod_consts[76]);
                }

                if (tmp_called_value_2 == NULL) {
                    assert(HAS_EXCEPTION_STATE(&exception_state));



                    exception_lineno = 45;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                frame_frame_GUI_Function$Analyse$SourceConfig$$$class__1_Source_2->m_frame.f_lineno = 45;
                tmp_dict_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
                if (tmp_dict_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                    exception_lineno = 45;
                    type_description_2 = "o";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[61];
                tmp_dict_value_2 = MAKE_DICT_EMPTY(tstate);
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[63];
                tmp_dict_value_2 = MAKE_DICT_EMPTY(tstate);
                tmp_res = PyDict_SetItem(tmp_dictset_value, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_dictset_value);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[87], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_2:


        {
            PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_frame_GUI_Function$Analyse$SourceConfig$$$class__1_Source_2, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            } else if (exception_tb->tb_frame != &frame_frame_GUI_Function$Analyse$SourceConfig$$$class__1_Source_2->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_GUI_Function$Analyse$SourceConfig$$$class__1_Source_2, exception_lineno);
                SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
            }
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_frame_GUI_Function$Analyse$SourceConfig$$$class__1_Source_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_frame_GUI_Function$Analyse$SourceConfig$$$class__1_Source_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        tmp_dictset_value = DEEP_COPY_DICT(tstate, mod_consts[88]);
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[89], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));
        tmp_dictset_value = DICT_COPY(tstate, mod_consts[90]);
        tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[91], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_result == false));
        {
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[92];
            Py_INCREF(tmp_defaults_1);


            tmp_classmethod_arg_1 = MAKE_FUNCTION_GUI_Function$Analyse$SourceConfig$$$function__1_set_File(tstate, tmp_defaults_1);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tstate, tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            tmp_result = DICT_SET_ITEM(locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12, mod_consts[93], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_result == false));
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_6 = mod_consts[80];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(tstate, 3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = const_tuple_empty;
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_frame_GUI_Function$Analyse$SourceConfig->m_frame.f_lineno = 12;
            tmp_assign_source_8 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED_STATE(tstate, &exception_state);


                exception_lineno = 12;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_8;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_7 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_7);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12);
        locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_lineno_1 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_1 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        Py_DECREF(locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12);
        locals_GUI_Function$Analyse$SourceConfig$$$class__1_Source_12 = NULL;
        // Re-raise.
        exception_state = exception_keeper_name_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_lineno_2 = exception_lineno;
        exception_lineno = 0;
        exception_keeper_name_2 = exception_state;
        INIT_ERROR_OCCURRED_STATE(&exception_state);

        // Re-raise.
        exception_state = exception_keeper_name_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 12;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_7);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_lineno_3 = exception_lineno;
    exception_lineno = 0;
    exception_keeper_name_3 = exception_state;
    INIT_ERROR_OCCURRED_STATE(&exception_state);

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_state = exception_keeper_name_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_2;
    frame_exception_exit_1:


    {
        PyTracebackObject *exception_tb = GET_EXCEPTION_STATE_TRACEBACK(&exception_state);
        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_frame_GUI_Function$Analyse$SourceConfig, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        } else if (exception_tb->tb_frame != &frame_frame_GUI_Function$Analyse$SourceConfig->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_frame_GUI_Function$Analyse$SourceConfig, exception_lineno);
            SET_EXCEPTION_STATE_TRACEBACK(&exception_state, exception_tb);
        }
    }



    assertFrameObject(frame_frame_GUI_Function$Analyse$SourceConfig);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("GUI_Function$Analyse$SourceConfig", false);

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *post_load = IMPORT_EMBEDDED_MODULE(tstate, "GUI_Function.Analyse.SourceConfig" "-postLoad");
        if (post_load == NULL) {
            return NULL;
        }
    }
#endif

    Py_INCREF(module_GUI_Function$Analyse$SourceConfig);
    return module_GUI_Function$Analyse$SourceConfig;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_GUI_Function$Analyse$SourceConfig, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("GUI_Function$Analyse$SourceConfig", false);

    RESTORE_ERROR_OCCURRED_STATE(tstate, &exception_state);
    return NULL;
}
