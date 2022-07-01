<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The request of listEventStreamingMetrics
 */
class ListEventStreamingMetricsRequest extends Model {
    protected $_name = [
        'eventStreamingNames' => 'EventStreamingNames',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->eventStreamingNames) {
            $res['EventStreamingNames'] = $this->eventStreamingNames;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return ListEventStreamingMetricsRequest
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['EventStreamingNames'])){
            if(!empty($map['EventStreamingNames'])){
                $model->eventStreamingNames = $map['EventStreamingNames'];
            }
        }
        return $model;
    }
    /**
     * @var string[]
     */
    public $eventStreamingNames;

}
