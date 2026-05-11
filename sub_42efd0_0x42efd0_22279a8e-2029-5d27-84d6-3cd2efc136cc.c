// ============================================================
// 函数名称: sub_42efd0
// 虚拟地址: 0x42efd0
// WARP GUID: 22279a8e-2029-5d27-84d6-3cd2efc136cc
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_42eed4, sub_403248
// [被调用的父级函数]: sub_443be4, sub_42dc47, sub_443288, sub_42ee98, sub_42e6ac, sub_430e08
// ============================================================

int32_t* __convention("regparm")sub_42efd0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result_1 = arg1
    int32_t* result_1 = arg1
    int32_t* result
    
    do
        result = result_1[9]
        
        if (result == 0)
            result = sub_403248(result_1, &data_43f580)
            
            if (result.b != 0 || result_1[0x59] != 0)
                return sub_42eed4(arg1)
            
            break
        
        result_1 = result
    while (result_1[0x5a].b != 0)
    
    return result
}
