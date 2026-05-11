// ============================================================
// 函数名称: sub_4a4010
// 虚拟地址: 0x4a4010
// WARP GUID: 997b6b05-0bb4-5302-b62e-1f58a35e3572
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: sub_4a3fb8
// [被调用的父级函数]: sub_4a3b70
// ============================================================

void* __convention("regparm")sub_4a4010(void* arg1)
{
    // 第一条实际指令: int32_t ecx
    int32_t ecx
    int32_t var_8 = ecx
    void* ebx = arg1
    var_8:3.b = 0
    int32_t edi = *(ebx + 0x28)
    int32_t esi = *(ebx + 0x24)
    
    if (esi s<= edi)
        int32_t i_1 = esi - edi - 1
        int32_t i
        
        do
            *(ebx + 0x1c) = edi
            int32_t edx
            arg1, ecx, edx = sub_4a3fb8(ebx, edx, ecx)
            
            if (arg1.b != 0)
                var_8:3.b = 1
                break
            
            edi -= 1
            i = i_1
            i_1 += 1
        while (i != 0xffffffff)
    
    arg1.b = var_8:3.b
    return arg1
}
