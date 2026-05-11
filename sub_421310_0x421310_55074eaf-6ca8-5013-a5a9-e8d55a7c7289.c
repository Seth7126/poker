// ============================================================
// 函数名称: sub_421310
// 虚拟地址: 0x421310
// WARP GUID: 55074eaf-6ca8-5013-a5a9-e8d55a7c7289
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: 无
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

int32_t __fastcallsub_421310(int32_t arg1, void* arg2, void* arg3 @ ebp, uint16_t* arg4 @ esi)
{
    // 第一条实际指令: int16_t entry_ebx
    int16_t entry_ebx
    arg2:1.b += entry_ebx:1.b
    *0x80000042 += 0x42
    *(arg2 + 0x69) |= 0x42
    int32_t ecx = *(arg3 + 0x6f) * 0x71686564
    *0xfffffff9 += entry_ebx:1.b
    *0xe00042f9 += ecx:1.b
    *(arg2 + 2) = rol.d(*(arg2 + 2), ecx.b)
    *0x42 += 0x42
    *0x80000042 += 0x42
    int32_t edi
    return sub_421348(0x61430742, arg2 + 2, ecx, arg4, edi) __tailcall
}
