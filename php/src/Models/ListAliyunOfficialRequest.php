<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The request of listAliyunOfficialEventSources
 */
class ListAliyunOfficialRequest extends Model {
    protected $_name = [
        'nextToken' => 'NextToken',
        'limit' => 'Limit',
    ];
    public function validate() {
        Model::validateRequired('nextToken', $this->nextToken, true);
    }
    public function toMap() {
        $res = [];
        if (null !== $this->nextToken) {
            $res['NextToken'] = $this->nextToken;
        }
        if (null !== $this->limit) {
            $res['Limit'] = $this->limit;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return ListAliyunOfficialRequest
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['NextToken'])){
            $model->nextToken = $map['NextToken'];
        }
        if(isset($map['Limit'])){
            $model->limit = $map['Limit'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $nextToken;

    /**
     * @var int
     */
    public $limit;

}
