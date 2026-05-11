// ============================================================
// 函数名称: sub_41cc54
// 虚拟地址: 0x41cc54
// WARP GUID: 80d72e1b-0d97-513a-b6a5-063eb9cd88eb
// 源二进制: E:/torrent/BOARDGAMES/Texas Hold'em Poker 3D Deluxe Edition T/Poker3d.exe.bndb
// ------------------------------------------------------------
// [交叉引用字符串]: 无
// [外部 API 调用]: CopyEnhMetaFileA
// [内部子函数调用]: 无
// [被调用的父级函数]: 无
// ============================================================

void __fastcallsub_41cc54(struct HENHMETAFILE__** arg1, int16_t* arg2, HENHMETAFILE arg3 @ eax, int32_t* arg4)
{
    // 第一条实际指令: void* esi = arg3
    void* esi = arg3
    
    if (esi == 0)
        return 
    
    *arg2 = 0xe
    *arg4 = 0
    *arg1 = CopyEnhMetaFileA(*(esi + 8), nullptr)
}
