<?php

// This file is auto-generated, don't edit it. Thanks.
namespace AlibabaCloud\SDK\EventBridge\Models;

use AlibabaCloud\Tea\Model;

/**
 * The detail of ConcurrentConfig
 */
class ConcurrentConfig extends Model {
    protected $_name = [
        'concurrency' => 'Concurrency',
    ];
    public function validate() {}
    public function toMap() {
        $res = [];
        if (null !== $this->concurrency) {
            $res['Concurrency'] = $this->concurrency;
        }
        return $res;
    }
    /**
     * @param array $map
     * @return ConcurrentConfig
     */
    public static function fromMap($map = []) {
        $model = new self();
        if(isset($map['Concurrency'])){
            $model->concurrency = $map['Concurrency'];
        }
        return $model;
    }
    /**
     * @var int
     */
    public $concurrency;

}
