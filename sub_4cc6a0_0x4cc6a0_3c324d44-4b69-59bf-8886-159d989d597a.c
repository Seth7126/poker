// ============================================================
// 函数名称: sub_4cc6a0
// 虚拟地址: 0x4cc6a0
// WARP GUID: 3c324d44-4b69-59bf-8886-159d989d597a
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4cc200
// [被调用的父级函数]: sub_4cdec4, sub_4cddb4
// ============================================================

int32_t __convention("regparm")sub_4cc6a0(int32_t arg1, char arg2)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    var_8:3.b = arg2
    var_8:2.b = 0
    int32_t ebx
    ebx.b = var_8:3.b
    
    if (ebx.b u<= 4)
        do
            if (ebx.b != var_8:3.b && sub_4cc200(arg1, ebx.b) s> 0)
                var_8:2.b = 1
            
            ebx += 1
        while (ebx.b != 5)
    
    arg1.b = var_8:2.b
    return arg1
}
