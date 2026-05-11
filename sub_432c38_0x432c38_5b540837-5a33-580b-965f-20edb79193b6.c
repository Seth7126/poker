// ============================================================
// 函数名称: sub_432c38
// 虚拟地址: 0x432c38
// WARP GUID: 5b540837-5a33-580b-965f-20edb79193b6
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_432c38(int32_t arg1, void* arg2)
{
    // 第一条实际指令: int32_t result = *(arg2 + 4)
    int32_t result = *(arg2 + 4)
    
    if (result u< 0x100 || result u> 0x108)
        int32_t ecx = *(arg2 + 4)
        
        if (ecx != 0xb000 && ecx != 0xb001 && *(arg2 + 4) != 0xb016 && *(arg2 + 4) != 0xb017
                && *(arg2 + 4) != 0x111)
            int32_t esi_1 = *(arg2 + 4)
            
            if ((esi_1 u<= 0x200 || esi_1 u> 0x20a) && *(arg2 + 4) != 0xa0)
                return 0
    
    result.b = 1
    return result
}
