<?php
/**
 * @file
 * base_wysiwyg_editor.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function base_wysiwyg_editor_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "linkit" && $api == "linkit_profiles") {
    return array("version" => "1");
  }
}
