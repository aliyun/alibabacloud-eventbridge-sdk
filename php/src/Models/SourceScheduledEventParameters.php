<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The detail of SourceScheduledEventParameters
 */
class SourceScheduledEventParameters extends Model {
    protected $_name = [
        'schedule' => 'Schedule',
        'timeZone' => 'TimeZone',
        'userData' => 'UserData',
    ];
    public function validate() {
        Model::validateRequired('schedule', $this->schedule, true);
        Model::validateRequired('timeZone', $this->timeZone, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->schedule) {
            $res['Schedule'] = $this->schedule;
        }
        if (null !== $this->timeZone) {
            $res['TimeZone'] = $this->timeZone;
        }
        if (null !== $this->userData) {
            $res['UserData'] = $this->userData;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return SourceScheduledEventParameters
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['Schedule'])){
            $model->schedule = $map['Schedule'];
        }
        if(isset($map['TimeZone'])){
            $model->timeZone = $map['TimeZone'];
        }
        if(isset($map['UserData'])){
            $model->userData = $map['UserData'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $schedule;

    /**
     * @var string
     */
    public $timeZone;

    /**
     * @var string[]
     */
    public $userData;

}
