<?php

/**
 * Implements template_preprocess_html().
 */
function helm_civic_preprocess_html(&$vars) {
  // Add Google Fonts, FontAwesome
  if ($google_font = theme_get_setting('google_font', 'helm_civic')) {
    drupal_add_css($google_font, array('external' => TRUE));
  }
  // @todo?
  //if (theme_get_setting('fontawesome', 'helm_civic')) {
  //  drupal_add_css(path_to_theme() . , array('external' => TRUE));
  //}
}

/**
 * Implements template_preprocess_html().
 */
function helm_civic_preprocess_page(&$vars) {
  if($pretty_sitename = theme_get_setting('pretty_sitename', 'helm_civic')) {
    $vars['helm_sitename'] = $pretty_sitename;
  }
  else {
    $vars['helm_sitename'] = $vars['site_name'];
  }
}


/**
 * Implements template_preprocess_panels_pane().
 */
function helm_civic_preprocess_panels_pane(&$vars) {
  if($vars['pane']->type == 'page_site_name') {
    $pretty_sitename = theme_get_setting('pretty_sitename', 'helm_civic');
    $vars['content'] = $pretty_sitename ? $pretty_sitename : $vars['content'];
  }
}

/**
 * Implements template_clean_markup_panels_clean_element().
 */
function helm_civic_preprocess_clean_markup_panels_clean_element(&$vars) {
  helm_civic_preprocess_panels_pane($vars);
}