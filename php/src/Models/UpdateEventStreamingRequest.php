<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\Source;
use AlibabaCloud\SDK\EventBridge\Models\Sink;
use AlibabaCloud\SDK\EventBridge\Models\RunOptions;

/**
 * The request of UpdateEventStreaming
 */
class UpdateEventStreamingRequest extends Model {
    protected $_name = [
        'eventStreamingName' => 'EventStreamingName',
        'description' => 'Description',
        'Source' => 'Source',
        'filterPattern' => 'FilterPattern',
        'Sink' => 'Sink',
        'runOptions' => 'RunOptions',
        'tag' => 'Tag',
    ];
    public function validate() {
        Model::validateRequired('eventStreamingName', $this->eventStreamingName, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->eventStreamingName) {
            $res['EventStreamingName'] = $this->eventStreamingName;
        }
        if (null !== $this->description) {
            $res['Description'] = $this->description;
        }
        if (null !== $this->Source) {
            $res['Source'] = null !== $this->Source ? $this->Source->toMap() : null;
        }
        if (null !== $this->filterPattern) {
            $res['FilterPattern'] = $this->filterPattern;
        }
        if (null !== $this->Sink) {
            $res['Sink'] = null !== $this->Sink ? $this->Sink->toMap() : null;
        }
        if (null !== $this->runOptions) {
            $res['RunOptions'] = null !== $this->runOptions ? $this->runOptions->toMap() : null;
        }
        if (null !== $this->tag) {
            $res['Tag'] = $this->tag;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return UpdateEventStreamingRequest
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['EventStreamingName'])){
            $model->eventStreamingName = $map['EventStreamingName'];
        }
        if(isset($map['Description'])){
            $model->description = $map['Description'];
        }
        if(isset($map['Source'])){
            $model->Source = Source::fromMap($map['Source']);
        }
        if(isset($map['FilterPattern'])){
            $model->filterPattern = $map['FilterPattern'];
        }
        if(isset($map['Sink'])){
            $model->Sink = Sink::fromMap($map['Sink']);
        }
        if(isset($map['RunOptions'])){
            $model->runOptions = RunOptions::fromMap($map['RunOptions']);
        }
        if(isset($map['Tag'])){
            $model->tag = $map['Tag'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $eventStreamingName;

    /**
     * @var string
     */
    public $description;

    /**
     * @var Source
     */
    public $Source;

    /**
     * @var string
     */
    public $filterPattern;

    /**
     * @var Sink
     */
    public $Sink;

    /**
     * @var RunOptions
     */
    public $runOptions;

    /**
     * @var string
     */
    public $tag;

}
