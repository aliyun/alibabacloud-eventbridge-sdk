<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The request of search EventStreaming
 */
class listEventStreamingsRequest extends Model {
    protected $_name = [
        'namePrefix' => 'NamePrefix',
        'sourceType' => 'SourceType',
        'sinkType' => 'SinkType',
        'limit' => 'Limit',
        'nextToken' => 'NextToken',
        'tag' => 'Tag',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->namePrefix) {
            $res['NamePrefix'] = $this->namePrefix;
        }
        if (null !== $this->sourceType) {
            $res['SourceType'] = $this->sourceType;
        }
        if (null !== $this->sinkType) {
            $res['SinkType'] = $this->sinkType;
        }
        if (null !== $this->limit) {
            $res['Limit'] = $this->limit;
        }
        if (null !== $this->nextToken) {
            $res['NextToken'] = $this->nextToken;
        }
        if (null !== $this->tag) {
            $res['Tag'] = $this->tag;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return listEventStreamingsRequest
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['NamePrefix'])){
            $model->namePrefix = $map['NamePrefix'];
        }
        if(isset($map['SourceType'])){
            $model->sourceType = $map['SourceType'];
        }
        if(isset($map['SinkType'])){
            $model->sinkType = $map['SinkType'];
        }
        if(isset($map['Limit'])){
            $model->limit = $map['Limit'];
        }
        if(isset($map['NextToken'])){
            $model->nextToken = $map['NextToken'];
        }
        if(isset($map['Tag'])){
            $model->tag = $map['Tag'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $namePrefix;

    /**
     * @var string
     */
    public $sourceType;

    /**
     * @var string
     */
    public $sinkType;

    /**
     * @var int
     */
    public $limit;

    /**
     * @var string
     */
    public $nextToken;

    /**
     * @var string
     */
    public $tag;

}
