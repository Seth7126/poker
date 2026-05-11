// ============================================================
// 函数名称: sub_440ee0
// 虚拟地址: 0x440ee0
// WARP GUID: da52f253-077c-5c45-b5e5-b7e5b1de8fb7
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_403248
// [被调用的父级函数]: sub_4310a8, sub_431310, sub_430484, sub_431810, sub_441770, sub_42f268, sub_42516c, sub_42c820, sub_43113c, sub_4448d8, sub_4250f0, sub_429f30, sub_430aa4, sub_431850, sub_44ba00, sub_43064c, sub_430854, sub_440f08, sub_430714, sub_42e5f8, sub_431268, sub_43057c, sub_4312b4
// ============================================================

int32_t* __convention("regparm")sub_440ee0(int32_t* arg1)
{
    // 第一条实际指令: int32_t* result = arg1
    int32_t* result = arg1
    
    while (true)
        int32_t* result_1 = result[9]
        
        if (result_1 == 0)
            break
        
        result = result_1
    
    if (sub_403248(result, &data_43f580) == 0)
        return 0
    
    return result
}
