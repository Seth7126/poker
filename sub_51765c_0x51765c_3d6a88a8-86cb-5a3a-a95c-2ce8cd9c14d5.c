// ============================================================
// 函数名称: sub_51765c
// 虚拟地址: 0x51765c
// WARP GUID: 3d6a88a8-86cb-5a3a-a95c-2ce8cd9c14d5
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_517be4
// [被调用的父级函数]: sub_4c4ab8, sub_4bdac0, sub_4c02cc
// ============================================================

void* __convention("regparm")sub_51765c(int32_t arg1, void* arg2)
{
    // 第一条实际指令: void var_31e
    void var_31e
    int16_t* esi_1
    int16_t* edi
    edi, esi_1 = __builtin_memcpy(&var_31e, arg1, 0x318)
    *edi = *esi_1
    sub_517be4(arg2)
    char var_2c
    void* result
    result.b = var_2c
    *(arg2 + 0x102) = result.b
    int16_t var_86
    result.w = var_86
    *(arg2 + 0x100) = result.w
    int32_t ebx
    ebx.w = var_86
    
    if (ebx.w s> 0)
        result = &var_31e
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
