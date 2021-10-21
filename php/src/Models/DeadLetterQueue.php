<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The detail of DeadLetterQueue
 */
class DeadLetterQueue extends Model {
    protected $_name = [
        'arn' => 'Arn',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->arn) {
            $res['Arn'] = $this->arn;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return DeadLetterQueue
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['Arn'])){
            $model->arn = $map['Arn'];
        }
        return $model;
    }
    /**
     * @var string
     */
    public $arn;

}
