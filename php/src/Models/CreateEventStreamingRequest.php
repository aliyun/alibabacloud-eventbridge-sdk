<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

use AlibabaCloud\SDK\EventBridge\Models\Source;
use AlibabaCloud\SDK\EventBridge\Models\Sink;
use AlibabaCloud\SDK\EventBridge\Models\RunOptions;

/**
 * The request of createEventStreaming
 */
class CreateEventStreamingRequest extends Model {
    protected $_name = [
        'eventStreamingName' => 'EventStreamingName',
        'description' => 'Description',
        'source' => 'Source',
        'filterPattern' => 'FilterPattern',
        'sink' => 'Sink',
        'runOptions' => 'RunOptions',
        'tag' => 'Tag',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->eventStreamingName) {
            $res['EventStreamingName'] = $this->eventStreamingName;
        }
        if (null !== $this->description) {
            $res['Description'] = $this->description;
        }
        if (null !== $this->source) {
            $res['Source'] = null !== $this->source ? $this->source->toMap() : null;
        }
        if (null !== $this->filterPattern) {
            $res['FilterPattern'] = $this->filterPattern;
        }
        if (null !== $this->sink) {
            $res['Sink'] = null !== $this->sink ? $this->sink->toMap() : null;
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
     * @return CreateEventStreamingRequest
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
            $model->source = Source::fromMap($map['Source']);
        }
        if(isset($map['FilterPattern'])){
            $model->filterPattern = $map['FilterPattern'];
        }
        if(isset($map['Sink'])){
            $model->sink = Sink::fromMap($map['Sink']);
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
    public $source;

    /**
     * @var string
     */
    public $filterPattern;

    /**
     * @var Sink
     */
    public $sink;

    /**
     * @var RunOptions
     */
    public $runOptions;

    /**
     * @var string
     */
    public $tag;

}
