<?php

/**
 * @file
 * Page callback file for the ogmk_reviews module.
 */

/**
 * Page callback for the reviews page.
 *
 * @param object $node
 *   The node (shop or product) for which to display the reviews page.
 */
function _ogmk_reviews_reviews_page($node) {
  $view = views_get_view($node->type . '_reviews', 'page');
  $view->override_url = $_GET['q'];
  return $view->preview();
}
