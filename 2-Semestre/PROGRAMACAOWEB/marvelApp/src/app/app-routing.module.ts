import { StoriesComponent } from './stories/stories.component';
import { SeriesComponent } from './series/series.component';
import { ComicsComponent } from './comics/comics.component';
import { CharactersComponent } from './characters/characters.component';
import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';

const routes: Routes = [
  {
  path: '', redirectTo: '/characters', pathMatch: "full"
  },
  {
    path: 'characters', component: CharactersComponent 
  },
  {
    path: 'comics', component: ComicsComponent
  },
  {
    path: 'serie', component: SeriesComponent
  }  ,
  {
    path: 'storie', component: StoriesComponent
  }
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
