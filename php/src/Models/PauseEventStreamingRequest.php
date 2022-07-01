<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The request of PauseEventStreaming
 */
class PauseEventStreamingRequest extends Model {
    protected $_name = [
        'eventStreamingName' => 'EventStreamingName',
    ];
    public function validate() {
        Model::validateRequired('eventStreamingName', $this->eventStreamingName, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->eventStreamingName) {
            $res['EventStreamingName'] = $this->eventStreamingName;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return PauseEventStreamingRequest
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['EventStreamingName'])){
            $model->eventStreamingName = $map['EventStreamingName'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $eventStreamingName;

}
