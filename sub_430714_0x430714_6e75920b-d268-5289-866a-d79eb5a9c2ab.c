// ============================================================
// 函数名称: sub_430714
// 虚拟地址: 0x430714
// WARP GUID: 6e75920b-d268-5289-866a-d79eb5a9c2ab
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_430714, sub_440ee0, sub_4032ac
// [被调用的父级函数]: sub_430714, sub_430780
// ============================================================

int32_t* __convention("regparm")sub_430714(int32_t* arg1, void* arg2, int32_t arg3)
{
    // 第一条实际指令: int32_t var_10 = arg3
    int32_t var_10 = arg3
    var_10.b = 1
    int32_t* result = sub_440ee0(arg1)
    
    if (result == 0 || arg1 == result || *(result + 0x215) == 0)
    label_43074b:
        
        if ((*(arg1 + 0x41) & 0x10) == 0)
            result.b = *(arg2 + 4)
            var_10:1.b = result.b
            int32_t* ebx
            ebx.w = 0xffbe
            sub_4032ac(arg1, &var_10:1)
            result.b = var_10:1.b
            *(arg2 + 4) = result.w
        
        if ((*(arg1 + 0x41) & 0x10) != 0 || *(arg2 + 4) != 0)
            var_10.b = 0
    else if (sub_430714().b == 0)
        goto label_43074b
    
    result.b = var_10.b
    return result
}
