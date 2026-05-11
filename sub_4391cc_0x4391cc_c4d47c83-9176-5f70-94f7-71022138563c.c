// ============================================================
// 函数名称: sub_4391cc
// 虚拟地址: 0x4391cc
// WARP GUID: c4d47c83-9176-5f70-94f7-71022138563c
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: sub_436850
// ============================================================

int32_t __convention("regparm")sub_4391cc(int16_t arg1, char arg2) __pure
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    var_8:1.b = arg2
    var_8:2.w = arg1
    int16_t result = 0
    
    if (var_8:3.b == 0)
        result = var_8:2.w
        
        if ((var_8:1.b & 1) != 0)
            result += 0x2000
        
        if ((var_8:1.b & 4) != 0)
            result += 0x4000
        
        if ((var_8:1.b & 2) != 0)
            return result - 0x8000
    
    return result
}
