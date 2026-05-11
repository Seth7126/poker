// ============================================================
// 函数名称: sub_424a5c
// 虚拟地址: 0x424a5c
// WARP GUID: e08f7565-fdcb-52f9-9c49-dcc397e2ed6d
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: SendMessageA
// [内部子函数调用]: sub_42c754, sub_431bcc, sub_42bc8c, sub_4318d0
// [被调用的父级函数]: 无
// ============================================================

int32_t __convention("regparm")sub_424a5c(void* arg1, int32_t arg2)
{
    // 第一条实际指令: char result = sub_431bcc(*(arg1 + 0xc))
    char result = sub_431bcc(*(arg1 + 0xc))
    
    if (result != 0)
        int32_t eax_1
        eax_1.b = arg2.b ^ 1
        result = SendMessageA(sub_4318d0(*(arg1 + 0xc)), 0xb, eax_1 & 0x7f, 0)
        int32_t ebx
        ebx.b = arg2.b ^ 1
        
        if (ebx.b != 0)
            sub_42c754(*(arg1 + 0xc), 0)
            return sub_42bc8c(*(arg1 + 0xc))
    
    return result
}
