<?php
  require_once 'StravaApi.php';
  $clientId = '12470'; 
  $clientSecret = '75245247b9499e30728c5b42a314d813697c8ccb';
  $api = new Iamstuartwilson\StravaApi(
      $clientId,
      $clientSecret
  );
  $api->authenticationUrl($redirect, $approvalPrompt = 'auto', $scope = null, $state = null);
  $api->setAccessToken('60aec726eebd5dd03f62eb958213c5d9e6c593f7');
  $all_activities = $api->get('athlete/activities', ['per_page' => 10]);
  echo '<br/>'; 
  print "<pre>";
  print_r($all_activities); 
  print "</pre>";
  echo '<br/>'; 
?>








