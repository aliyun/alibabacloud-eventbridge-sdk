<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\EventStreamingMetric;

/**
 * The response of listEventStreamingMetrics
 */
class ListEventStreamingMetricsResponse extends Model {
    protected $_name = [
        'requestId' => 'RequestId',
        'resourceOwnerAccountId' => 'ResourceOwnerAccountId',
        'eventStreamingMetrics' => 'EventStreamingMetrics',
    ];
    public function validate() {
        Model::validateRequired('requestId', $this->requestId, true);
        Model::validateRequired('resourceOwnerAccountId', $this->resourceOwnerAccountId, true);
        Model::validateRequired('eventStreamingMetrics', $this->eventStreamingMetrics, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->requestId) {
            $res['RequestId'] = $this->requestId;
        }
        if (null !== $this->resourceOwnerAccountId) {
            $res['ResourceOwnerAccountId'] = $this->resourceOwnerAccountId;
        }
        if (null !== $this->eventStreamingMetrics) {
            $res['EventStreamingMetrics'] = [];
            if(null !== $this->eventStreamingMetrics && is_array($this->eventStreamingMetrics)){
                $n = 0;
                foreach($this->eventStreamingMetrics as $item){
                    $res['EventStreamingMetrics'][$n++] = null !== $item ? $item->toMap() : $item;
                }
            }
        }
        return $res;
    }
    /**
     * @param array $map
     * @return ListEventStreamingMetricsResponse
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['RequestId'])){
            $model->requestId = $map['RequestId'];
        }
        if(isset($map['ResourceOwnerAccountId'])){
            $model->resourceOwnerAccountId = $map['ResourceOwnerAccountId'];
        }
        if(isset($map['EventStreamingMetrics'])){
            if(!empty($map['EventStreamingMetrics'])){
                $model->eventStreamingMetrics = [];
                $n = 0;
                foreach($map['EventStreamingMetrics'] as $item) {
                    $model->eventStreamingMetrics[$n++] = null !== $item ? EventStreamingMetric::fromMap($item) : $item;
                }
            }
        }
        return $model;
    }
    /**
     * @var string
     */
    public $requestId;

    /**
     * @var string
     */
    public $resourceOwnerAccountId;

    /**
     * @var EventStreamingMetric[]
     */
    public $eventStreamingMetrics;

}
