// ============================================================
// 函数名称: sub_44ba00
// 虚拟地址: 0x44ba00
// WARP GUID: 8778bb21-56bc-502a-9179-2386efcbe902
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: PostMessageA
// [内部子函数调用]: sub_42c754, sub_440ee0, sub_431bcc, sub_4318d0
// [被调用的父级函数]: sub_44ba98, sub_44bc5c
// ============================================================

int32_t __convention("regparm")sub_44ba00(int32_t* arg1)
{
    // 第一条实际指令: int32_t result = 0
    int32_t result = 0
    int32_t* esi = *(arg1[0x4a] + 4)
    
    if (*(arg1 + 0x47) != 0 && (arg1[8].b & 1) == 0 && esi != 0 && *(esi + 0x1a) != 0)
        if ((*(*esi + 0x24))() != 0)
            int32_t* eax_4 = sub_440ee0(arg1)
            
            if (eax_4 != 0 && *(eax_4 + 0x216) != 0 && sub_431bcc(eax_4) != 0)
                if (arg1[0x4f].b == 0)
                    PostMessageA(sub_4318d0(eax_4), 0x30f, 0, 0)
                else
                    sub_42c754(eax_4, 0)
                
                result.b = 1
                *(esi + 0x1a) = 0
        else
            *(esi + 0x1a) = 0
    
    return result
}
