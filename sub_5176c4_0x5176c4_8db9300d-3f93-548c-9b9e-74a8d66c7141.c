// ============================================================
// 函数名称: sub_5176c4
// 虚拟地址: 0x5176c4
// WARP GUID: 8db9300d-3f93-548c-9b9e-74a8d66c7141
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_517ba0
// [被调用的父级函数]: sub_4c92f0
// ============================================================

void* __convention("regparm")sub_5176c4(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void var_108
    void var_108
    __builtin_memcpy(&var_108, arg1, 0x104)
    sub_517ba0(arg2)
    char var_6
    void* result
    result.b = var_6
    *(arg2 + 0x2f2) = result.b
    int16_t var_8
    result.w = var_8
    *(arg2 + 0x298) = result.w
    int32_t ebx
    ebx.w = var_8
    
    if (ebx.w s> 0)
        result = &var_108
        void* edx = arg2
        int16_t i
        
        do
            *edx = *result
            edx += 4
            result += 4
            i = ebx.w
            ebx.w -= 1
        while (i != 1)
    
    return result
}
